FROM azzulis/llvm:llvmorg-19.1.7-57

ENV DEBIAN_FRONTEND=noninteractive
ENV CC=/usr/bin/clang-15
ENV CXX=/usr/bin/clang++-15

WORKDIR /

RUN apt-get -y update \
    && apt-get -y upgrade \
	&& apt-get install -y vim sudo rsync gdb openssh-server ccache python3 python3-pip \
    && sudo mkdir -p /etc/apt/keyrings \
    && curl -fsSL https://deb.nodesource.com/gpgkey/nodesource-repo.gpg.key | sudo gpg --dearmor -o /etc/apt/keyrings/nodesource.gpg \
    && echo "deb [signed-by=/etc/apt/keyrings/nodesource.gpg] https://deb.nodesource.com/node_21.x nodistro main" | sudo tee /etc/apt/sources.list.d/nodesource.list \
    && apt-get -y update \
    && apt-get install -y nodejs \
    && npm install -g tree-sitter-cli@0.24.5 node-addon-api@8.3.1

# Setup the default user.
RUN useradd -rm -d /home/dev -s /bin/bash -g root -G sudo dev
RUN echo 'dev:dev' | chpasswd

# Configure SSHD.
# SSH login fix. Otherwise user is kicked off after login
RUN sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd
RUN mkdir /var/run/sshd
RUN bash -c 'install -m755 <(printf "#!/bin/sh\nexit 0") /usr/sbin/policy-rc.d'
RUN ex +'%s/^#\zeListenAddress/\1/g' -scwq /etc/ssh/sshd_config
RUN ex +'%s/^#\zeHostKey .*ssh_host_.*_key/\1/g' -scwq /etc/ssh/sshd_config
RUN RUNLEVEL=1 dpkg-reconfigure openssh-server
RUN ssh-keygen -A -v
RUN update-rc.d ssh defaults

# Configure sudo.
RUN ex +"%s/^%sudo.*$/%sudo ALL=(ALL:ALL) NOPASSWD:ALL/g" -scwq! /etc/sudoers

# Generate and configure user keys.
USER dev
RUN ssh-keygen -t ed25519 -f ~/.ssh/id_ed25519
RUN echo "export CC=/usr/bin/clang-15" >> ~/.bashrc
RUN echo "export CXX=/usr/bin/clang++-15" >> ~/.bashrc

# Setup default command and/or parameters.
EXPOSE 22
CMD ["/usr/bin/sudo", "/usr/sbin/sshd", "-D", "-o", "ListenAddress=0.0.0.0"]
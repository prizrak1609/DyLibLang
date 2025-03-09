include(ExternalProject)

ExternalProject_Add(
  tree-sitter
  GIT_REPOSITORY https://github.com/tree-sitter/tree-sitter.git
  GIT_TAG        v0.25.3
  CONFIGURE_COMMAND ""
  BUILD_COMMAND make
  INSTALL_COMMAND ""
  BUILD_IN_SOURCE TRUE
)

# Specify the include directory and library for tree-sitter
ExternalProject_Get_Property(tree-sitter source_dir)
set(TREE_SITTER_INCLUDE_DIR ${source_dir}/lib/include)
set(TREE_SITTER_LIBRARY ${source_dir}/libtree-sitter.a)
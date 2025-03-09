cmake_minimum_required(VERSION 3.10)

project(DyLibLang LANGUAGES C CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(LLVM_DIR "/llvm/lib/cmake/llvm")

find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif()

find_package(LLVM REQUIRED CONFIG)
find_package(tree-sitter REQUIRED)

list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")

include(AddLLVM)

add_executable(DyLibLang src/main.cpp
        src/parser.c
        src/ast/ASTNode.h
        src/ast/LoadLibNode.cpp
        src/ast/LoadLibNode.h
        src/ast/UnloadNode.cpp
        src/ast/UnloadNode.h
        src/ast/FunctionCallNode.cpp
        src/ast/FunctionCallNode.h
        src/ast/VariableNode.cpp
        src/ast/VariableNode.h
        src/ast/TypeNode.cpp
        src/ast/TypeNode.h
        src/ast/ValueNode.cpp
        src/ast/ValueNode.h)

add_dependencies(DyLibLang tree-sitter)

target_link_directories(DyLibLang PRIVATE ${LLVM_LIBRARY_DIR} ${CMAKE_LIBRARY_PATH})

llvm_map_components_to_libnames(llvm_libraries support mcjit core option bitwriter native nativecodegen executionengine)
target_link_libraries(DyLibLang PRIVATE ${TREE_SITTER_LIBRARY} ${llvm_libraries})

target_compile_definitions(DyLibLang PRIVATE ${LLVM_DEFINITIONS})

target_include_directories(DyLibLang PRIVATE ${TREE_SITTER_INCLUDE_DIR} ${LLVM_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_INCLUDE_PATH})
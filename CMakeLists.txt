cmake_minimum_required(VERSION 3.10)

project(DyLibLang)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

find_package(tree-sitter REQUIRED)

add_executable(DyLibLang src/main.cpp src/parser.c)

add_dependencies(DyLibLang tree-sitter)

target_include_directories(DyLibLang PRIVATE ${TREE_SITTER_INCLUDE_DIR} src)
target_link_libraries(DyLibLang PRIVATE ${TREE_SITTER_LIBRARY})
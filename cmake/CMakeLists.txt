cmake_minimum_required(VERSION 3.14)

project(cmake-test VERSION 0.1 LANGUAGES CXX)

add_compile_options(-Wall -Wextra -Wpedantic)

include_directories(include)

add_subdirectory(src)

cmake_minimum_required(VERSION 3.10)
project(ex-01 CXX)

# ----------------------------------------------------------------------
# Configurações gerais
# ----------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Armadillo REQUIRED)
add_executable(ex-01 ex-01.cpp)
target_link_libraries(ex-01 PUBLIC armadillo)

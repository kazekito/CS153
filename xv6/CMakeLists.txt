cmake_minimum_required(VERSION 3.17)
project(xv6 C)

set(CMAKE_C_STANDARD 99)

add_library(xv6 library.c library.h hello.c test.c waittest.c)
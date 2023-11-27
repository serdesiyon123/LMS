cmake_minimum_required(VERSION 3.26)
project(LMS)

set(CMAKE_CXX_STANDARD 20)

add_executable(LMS
        main.cpp
        books.cpp
        books.h
        user.cpp
        user.h)

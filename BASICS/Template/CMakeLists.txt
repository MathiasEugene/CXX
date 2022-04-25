cmake_minimum_required(VERSION 3.15)

project(templateHeritance LANGUAGES CXX)

add_executable(main main.cpp)

add_library(templateHeritance
            SHARED
            templateHeritance.h
            templateHeritance.cpp)

target_link_libraries(main templateHeritance)
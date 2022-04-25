cmake_minimum_required(VERSION 3.15)

project(copyAssignmentCtor LANGUAGES CXX)

add_executable(main main.cpp)

add_library(myClass 
    STATIC
    myClass.h
    myClass.cpp)

target_link_libraries(main myClass)
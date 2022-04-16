cmake_minimum_required(VERSION 3.15)

project(Strategy LANGUAGES CXX)

add_executable(Strategy main.cpp)

add_library(TaxStrategy
    STATIC
    TaxStrategyInc.h
    TaxStrategy.h
    TaxStrategy.cpp
    CN_TaxStrategy.h
    Context.h
)
set_target_properties(TaxStrategy PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(Strategy PUBLIC TaxStrategy)
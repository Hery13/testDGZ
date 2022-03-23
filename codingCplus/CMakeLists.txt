cmake_minimum_required(VERSION  3.16.3)

project(mytest VERSION 1.0 LANGUAGES CXX)

#compilation    c++20

set(CMAKE_CXX_STANDARD  20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(utils SHARED utils.cpp)

add_executable(mytest main.cpp)
target_link_libraries(mytest PUBLIC utils)
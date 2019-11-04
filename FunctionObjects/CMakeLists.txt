cmake_minimum_required(VERSION 2.6)
project(functionobjects)

add_executable(functionobjects main.cpp)

install(TARGETS functionobjects RUNTIME DESTINATION bin)

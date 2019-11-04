cmake_minimum_required(VERSION 2.6)
project(usingstandarditerators)

add_executable(usingstandarditerators main.cpp)

install(TARGETS usingstandarditerators RUNTIME DESTINATION bin)

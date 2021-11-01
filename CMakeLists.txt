cmake_minimum_required(VERSION 3.20)
project(inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(inheritance main.cpp appointment.cpp appointment.h onetime.cpp onetime.h daily.cpp daily.h weekly.cpp weekly.h monthly.cpp monthly.h)

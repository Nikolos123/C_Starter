cmake_minimum_required(VERSION 3.21)
project(C_Starter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C_Starter
        lesson_4/task.cpp lesson_3/task_example.cpp)

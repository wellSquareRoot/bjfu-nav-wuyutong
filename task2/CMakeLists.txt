cmake_minimum_required(VERSION 3.10)
project(Task2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main 
    main.cpp 
    src/swap.cpp 
    src/scores.cpp
)
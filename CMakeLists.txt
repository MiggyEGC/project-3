cmake_minimum_required(VERSION 3.21)
project(untitled1 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled1 main.c weather_csv.c weather_csv.h weather_processing.c weather_processing.h)

cmake_minimum_required(VERSION 3.9.2)
set(CMAKE_CXX_STANDARD 17)

project(gb-physics)

include_directories(include)

file(GLOB SOURCES "src/*.cpp" "tests/*.cpp")

add_executable(gb-physics-tests ${SOURCES})
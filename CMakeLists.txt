cmake_minimum_required(VERSION 3.0.0)
project(DataA2 VERSION 1.0.0)

add_executable(MINHEAP main.cpp player.cpp PlayerTracker.cpp Program.cpp Program.hpp)

target_include_directories(MINHEAP PUBLIC ${CMAKE_SOURCE_DIR}/sdmutils)

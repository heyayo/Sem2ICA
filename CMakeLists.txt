cmake_minimum_required(VERSION 3.0.0)
project(DXFORCE VERSION 1.0.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB COMMON Common/*.cpp)
file(GLOB SOURCE *.cpp)

if (UNIX)
	set(CMAKE_CXX_FLAGS "-Wno-deprecated")
	set(CMAKE_EXE_LINKER_FLAGS "-lglfw -lGL -lGLU -lGLEW")
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
	set(CMAKE_CXX_STANDARD 14)
endif (UNIX)

add_library(CommonLib ${COMMON})
add_executable(FMP ${SOURCE})

target_include_directories(FMP PUBLIC ${CMAKE_SOURCE_DIR}/Common/)
target_link_libraries(FMP PUBLIC CommonLib)


cmake_minimum_required(VERSION 3.0.0)
project(DXGL3D VERSION 1.0.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_EXE_LINKER_FLAGS "-lGL -lGLU -lGLEW -lglfw")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

file(GLOB COMMON Common/*)
set(SOURCE Application.cpp main.cpp Input.cpp Mesh.cpp Scene1.cpp Scene2.cpp newCamera.cpp AACam.cpp shader.cpp MeshBuilder.cpp)

add_library(CommonLib ${COMMON})
add_executable(GL3D ${SOURCE})

target_include_directories(GL3D PUBLIC ${CMAKE_SOURCE_DIR}/Common)
target_include_directories(GL3D PUBLIC ${CMAKE_SOURCE_DIR}/include/GL)
target_include_directories(GL3D PUBLIC ${CMAKE_SOURCE_DIR}/include/GLFW)
target_include_directories(GL3D PUBLIC ${CMAKE_SOURCE_DIR}/glm)
#target_link_libraries(GL3D GL GLU GLEW glfw)
target_link_libraries(GL3D PUBLIC ${CMAKE_SOURCE_DIR}/lib/linux/libGLEW.a)
target_link_libraries(CommonLib PUBLIC ${CMAKE_SOURCE_DIR}/lib/linux/libGLEW.a)
target_link_libraries(GL3D PUBLIC ${CMAKE_SOURCE_DIR}/lib/linux/libglfw3.a)
target_link_libraries(CommonLib PUBLIC ${CMAKE_SOURCE_DIR}/lib/linux/libglfw3.a)
target_link_libraries(GL3D PUBLIC CommonLib)


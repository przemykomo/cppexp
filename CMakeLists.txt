cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hello VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp CMAKE_CONFIGURE_DEPENDS)
add_executable(hello ${SRC_FILES})

target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

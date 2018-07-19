cmake_minimum_required(VERSION 3.11)

set(dir ${CMAKE_CURRENT_SOURCE_DIR}/./bin/)
set(EXECUTABLE_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)
set(LIBRARY_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)

set(CMAKE_BUILD_TYPE debug)
set(CMAKE_cxx_flags "${CMAKE_CXX_FLAGS} --stdc=C++")


project(buffer)

add_executable(
    main
    main.cpp
    buffer.cpp
)


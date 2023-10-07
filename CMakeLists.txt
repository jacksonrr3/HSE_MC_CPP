cmake_minimum_required(VERSION 3.0.0)
project(CPPcourse VERSION 0.1.0 LANGUAGES C CXX)
SET(CMAKE_CXX_STANDARD 14)

Set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

file(GLOB src_files 
    "*.cpp"
    "src/*.cpp"
)

add_executable(${PROJECT_NAME} ${src_files})

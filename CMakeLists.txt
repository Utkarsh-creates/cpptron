cmake_minimum_required(VERSION 3.16)

project(cpptron
    VERSION 0.1.0
    DESCRIPTION "A C++ machine learning implementation"
    LANGUAGES CXX
)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Collect source files
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
)

# Application executable
add_executable(cpptron
    app/main.cpp
    ${SOURCES}
)

# Include directories
target_include_directories(cpptron
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

# Compiler warnings
if(MSVC)
    target_compile_options(cpptron PRIVATE /W4)
else()
    target_compile_options(cpptron PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Copy runtime dataset
configure_file(
    "${PROJECT_SOURCE_DIR}/data/dataset.txt"
    "${CMAKE_CURRENT_BINARY_DIR}/data/dataset.txt"
    COPYONLY
)
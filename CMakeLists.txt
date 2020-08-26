cmake_minimum_required(VERSION 3.16)
project(Pipeline_project
        LANGUAGES CXX)

# Set flags
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O1")

# Add src code
add_subdirectory(src)

# Add unit testing
enable_testing()
add_subdirectory(test)
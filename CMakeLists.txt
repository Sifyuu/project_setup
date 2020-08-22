cmake_minimum_required(VERSION 3.16)
project(Pipeline_project LANGUAGES CXX)

# Add src code
add_subdirectory(src)

# Add unit testing
enable_testing()
add_subdirectory(test)
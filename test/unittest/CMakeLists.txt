cmake_minimum_required(VERSION 3.15)

add_executable(unittest)
target_sources(unittest
    PRIVATE
    main.cpp
    test_format.cpp)

target_link_libraries(unittest PRIVATE format)

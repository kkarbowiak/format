cmake_minimum_required(VERSION 3.15)

add_executable(unittest)
target_sources(unittest
    PRIVATE
    main.cpp
    test_format.cpp)

target_compile_features(unittest PRIVATE cxx_std_20)

target_link_libraries(unittest PRIVATE format)
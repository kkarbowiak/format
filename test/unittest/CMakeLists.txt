cmake_minimum_required(VERSION 3.15)

add_executable(unittest)
target_sources(unittest
    PRIVATE
    main.cpp
    test_format.cpp)

target_compile_features(unittest PRIVATE cxx_std_20)
target_compile_options(unittest PRIVATE
    $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:
        -Wall -Wextra -Werror -pedantic-errors>
    $<$<CXX_COMPILER_ID:MSVC>:
        /W4 /WX /permissive->)

target_link_libraries(unittest PRIVATE format)

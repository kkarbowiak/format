cmake_minimum_required(VERSION 3.15)

if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    add_subdirectory(test/unittest)
endif()

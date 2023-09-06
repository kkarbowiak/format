cmake_minimum_required(VERSION 3.15)

project("format" LANGUAGES CXX)

add_library(${PROJECT_NAME} INTERFACE)

if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    add_subdirectory(test/unittest)
endif()

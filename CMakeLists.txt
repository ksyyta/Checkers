cmake_minimum_required(VERSION 3.0.0)
project(kakho4ew VERSION 0.1.0)

include(CTest)
include_directories(include)
enable_testing()

add_executable(kakho4ew main.cpp ${SRC_FILES})
file(GLOB SRC_FILES src/*.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CXX_STANDARD 17)
include(CPack)

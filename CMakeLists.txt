cmake_minimum_required(VERSION 3.18)

project(polygon_lib)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

add_library(polygon_lib 
    SHARED 
    ./src/polygon.cpp
)

target_include_directories(polygon_lib
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include/polygon_lib
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(main ./main.cpp)

target_link_libraries(main 
    PRIVATE
    polygon_lib
)
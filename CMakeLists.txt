
cmake_minimum_required(VERSION 2.8)
project(homework_1)

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(homework_1 pov_multi.cpp)
# add_executable(COMPUTERVISION filters.cpp)

target_link_libraries(homework_1 ${OpenCV_LIBS})

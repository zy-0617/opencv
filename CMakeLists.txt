cmake_minimum_required(VERSION 3.10)
project(test)

set(CMAKE_CXX_STANDARD 11)
#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(erode erode.cpp)
target_link_libraries(erode ${OpenCV_LIBS})

add_executable(blur blur.cpp split.cpp)
target_link_libraries(blur ${OpenCV_LIBS})

add_executable(canny canny.cpp)
target_link_libraries(canny ${OpenCV_LIBS})

add_executable(split split.cpp)
target_link_libraries(split ${OpenCV_LIBS})

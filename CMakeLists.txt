cmake_minimum_required(VERSION 3.10)
project(test)

set(CMAKE_CXX_STANDARD 11)

#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

#add_executable(test1 main.cpp)
add_executable(test2 blur.cpp)
#add_executable(test3 canny.cpp)

#target_link_libraries(test1 ${OpenCV_LIBS})
target_link_libraries(test2 ${OpenCV_LIBS})
#target_link_libraries(test3 ${OpenCV_LIBS})

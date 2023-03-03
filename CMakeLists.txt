# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required(VERSION 3.12)

project(MyAlgorithms
  VERSION 0.1
  DESCRIPTION "My implementation for algorithms from the 'Introduction to Algorithms - Fourth Edition' book"
  LANGUAGES CXX
)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(BUILD_SHARED_LIBS OFF)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

# Включите подпроекты.
add_subdirectory(${CMAKE_PROJECT_NAME})
add_subdirectory(Testing)

# executable
#add_executable(executable main.cpp)
#target_link_libraries(executable PRIVATE ${PROJECT_NAME})
#install(TARGETS executable DESTINATION bin)

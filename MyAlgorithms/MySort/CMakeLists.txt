add_library(MySort "sort.cpp")

target_include_directories(MySort INTERFACE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

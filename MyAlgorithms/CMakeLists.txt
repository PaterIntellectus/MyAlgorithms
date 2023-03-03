add_subdirectory(MySort)

add_library(${CMAKE_PROJECT_NAME} MyAlgorithmsDummy.cpp)
#set_property(TARGET ${CMAKE_PROJECT_NAME} PROPERTY CXX_STANDARD 20)
target_link_libraries(${CMAKE_PROJECT_NAME} MySort)

install(TARGETS ${CMAKE_PROJECT_NAME} DESTINATION lib)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

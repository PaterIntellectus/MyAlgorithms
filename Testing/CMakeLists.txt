add_executable(Testing "testSorting.cpp")

target_link_libraries(Testing PRIVATE ${CMAKE_PROJECT_NAME})

install(TARGETS Testing DESTINATION tests)
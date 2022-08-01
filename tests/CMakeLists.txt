find_package (Catch2 3 REQUIRED)

add_executable (project_tests test.cpp)

target_include_directories (project_tests PUBLIC ${CMAKE_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(project_tests PUBLIC Catch2::Catch2WithMain Hello)

# add_test (NAME test1 COMMAND project_tests "[test1]")

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include (CTest)
include (Catch)
catch_discover_tests()
add_library(Hello add.cpp)

target_include_directories(Hello PUBLIC 
                        ${CMAKE_SOURCE_DIR}/include 
                        ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(HelloExe main.cpp)
target_link_libraries(HelloExe Hello)

cmake_minimum_required(VERSION 2.8)

project (lab3-travis_example)
set(SOURCES main.cpp)
add_executable (${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} lab3-travis)

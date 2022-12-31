cmake_minimum_required(VERSION 3.24)
project(sfml1)

set(CMAKE_CXX_STANDARD 17)

include(FindPkgConfig)

pkg_check_modules(SFML2 REQUIRED sfml-all)

add_executable(sfml1 main.cpp main.h Input.cpp Input.h)
target_link_libraries(sfml1 sfml-graphics sfml-window sfml-system sfml-main -mwindows)

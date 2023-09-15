cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_C_STANDARD 11)

find_package(CURL REQUIRED)

add_executable(prog1 ejer1/prog1.c)
add_executable(prog2 ejer2/prog2.c ejer2/prog2.h)
add_executable(prog3 ejer3/prog3.c ejer3/prog3.h)

add_executable(prog4 ejer4/prog4.c)
target_link_libraries(prog4 ${CURL_LIBRARIES})
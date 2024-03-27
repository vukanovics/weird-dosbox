cmake_minimum_required(VERSION 3.5)

project(weird VERSION 1.0 LANGUAGES C)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER i686-pc-msdosdjgpp-gcc)
set(CMAKE_C_FLAGS "-I/usr/i686-pc-msdosdjgpp/sys-include/ -O0")

add_executable(weird main.c)
set_target_properties(weird PROPERTIES SUFFIX ".exe")

install(TARGETS weird RUNTIME DESTINATION bin)

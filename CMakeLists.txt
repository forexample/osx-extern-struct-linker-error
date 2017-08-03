cmake_minimum_required(VERSION 3.0)
project(foo)

option(FOO_APPLY_WORKAROUND "Reproduce link error" OFF)

add_library(foo foo.h foo.c)
target_include_directories(foo PUBLIC "${CMAKE_CURRENT_LIST_DIR}")

if(FOO_APPLY_WORKAROUND)
  target_compile_definitions(foo PUBLIC FOO_APPLY_WORKAROUND)
endif()

add_executable(boo main.c)
target_link_libraries(boo PUBLIC foo)

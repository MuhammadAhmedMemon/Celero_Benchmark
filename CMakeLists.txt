cmake_minimum_required(VERSION 3.15.2)
project(Celero_BM VERSION 1.0.0)

set(Include_DIR ${PROJECT_SOURCE_DIR}/Celero/include/celero)
set(Include_libs ${PROJECT_SOURCE_DIR}/Celero/build/debug)

include_directories(${PROJECT_SOURCE_DIR}/Celero/include)

add_executable(main main.cpp)

#target_link_libraries(main ${Include_libs}/celerod.lib)
target_link_libraries(main ${Include_libs}/celerod.lib)

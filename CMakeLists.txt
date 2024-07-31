cmake_minimum_required(VERSION 3.26)
project(HelloOpenGL)

set (CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES "source/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")

include_directories("include")
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

add_subdirectory(lib/freeglut)
set (FREEGLUT_BUILD_STATIC_LIBS ON)
include_directories("lib/freeglut/include")
target_link_libraries(${PROJECT_NAME} PRIVATE freeglut_static)

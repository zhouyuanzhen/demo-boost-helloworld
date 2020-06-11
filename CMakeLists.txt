cmake_minimum_required(VERSION 3.13)
project(boost_demo)
set(CMAKE_CXX_STANDARD 14)

# 
find_package(Boost REQUIRED COMPONENTS locale)
if (NOT Boost_FOUND)
    message("Not found Boost")
endif ()

#
include_directories(${Boost_INCLUDE_DIRS})
message("${Boost_INCLUDE_DIRS}")

#
link_libraries(${Boost_LIBRARIES})
message("${Boost_LIBRARIES}")

add_executable(boost-helloworld main.cpp)

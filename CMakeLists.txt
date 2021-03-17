cmake_minimum_required(VERSION 3.4)

project(Algorithm)

add_definitions(-Werror=return-type)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


message(${CMAKE_CXX_COMPILER_ID})


add_subdirectory(algorithm)
add_subdirectory(leetcode)


MESSAGE("make files end")




#target_link_libraries()
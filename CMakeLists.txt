cmake_minimum_required(VERSION 3.20)
project(cpp_Data_Structures)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_Data_Structures main.cpp List/List.h List/DynamicArray.cpp List/DynamicArray.h List/Link.cpp List/Link.h List/BidirectionalLink.cpp List/BidirectionalLink.h List/LinkedList.cpp List/LinkedList.h)

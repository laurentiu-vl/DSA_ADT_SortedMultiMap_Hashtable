cmake_minimum_required(VERSION 3.30)
project(DSA_ADT_SortedMultiMap_Hashtable)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA_ADT_SortedMultiMap_Hashtable main.cpp
        ExtendedTest.cpp
        ExtendedTest.h
        ShortTest.cpp
        ShortTest.h
        SMMIterator.cpp
        SMMIterator.h
        SortedMultiMap.cpp
        SortedMultiMap.h)

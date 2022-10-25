cmake_minimum_required(VERSION 3.22)
project(learnCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(learnCpp
        oop/oop.cpp oop/rectangle.cpp oop/rectangle.h oop/Person.cpp oop/Person.h oop/SmartPointer.cpp oop/SmartPointer.h oop/Length.cpp oop/Length.h oop/Array.cpp oop/Array.h)

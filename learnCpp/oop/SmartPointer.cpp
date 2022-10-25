//
// Created by julian on 10/25/22.
//

#include "SmartPointer.h"

SmartPointer::~SmartPointer() {
    delete ptr;
    ptr = nullptr;
}

SmartPointer::SmartPointer(int *ptr) : ptr{ptr} {

}

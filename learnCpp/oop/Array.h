//
// Created by julian on 10/25/22.
//

#ifndef LEARNCPP_ARRAY_H
#define LEARNCPP_ARRAY_H

#include <cstddef>

class Array {
public:
    explicit Array(size_t size);
    ~Array();
    int& operator[](size_t index);
private:
    int* values;
    size_t size;
};


#endif //LEARNCPP_ARRAY_H

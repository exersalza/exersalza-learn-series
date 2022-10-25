//
// Created by julian on 10/25/22.
//

#ifndef LEARNCPP_SMARTPOINTER_H
#define LEARNCPP_SMARTPOINTER_H


class SmartPointer {
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();
    int& operator*();
private:
    int* ptr;
};


#endif //LEARNCPP_SMARTPOINTER_H

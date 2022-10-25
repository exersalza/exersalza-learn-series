//
// Created by julian on 10/25/22.
//

#include <iostream>
#include "rectangle.h"
#include "Person.h"
#include "SmartPointer.h"
#include "Length.h"
#include "Array.h"
#include <memory>

using namespace std;

int main() {
    Length length {10};
    int x = length;
    cout << x << endl;
    return 0;
}
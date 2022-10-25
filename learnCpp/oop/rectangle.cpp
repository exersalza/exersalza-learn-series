//
// Created by julian on 10/25/22.
//

#include "rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw() {
    cout << "drawing rectangle" << endl;
    cout << "dimensions" << width << "x" << height << endl;
}

int Rectangle::getarea() {
    return width * height;
}

int Rectangle::getwidth() {
    return width;
}

int Rectangle::setwidth(int width) {
    if (width < 0)
        throw invalid_argument("width must be greater than zero");
    this->width = width;
    return 0;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("height must be greater than zero");
    this->height = height;
}

Rectangle::Rectangle(int width, int height) {
    objCount++;
    setHeight(height);
    setwidth(width);
    cout << "Construct rectangle" << endl;
}

Rectangle::Rectangle(int width, int height, const string &color) : Rectangle(width, height) {
    this->color = color;
}

Rectangle::~Rectangle() {
    cout << "Destroyed" << endl;
}

int Rectangle::objCount = 0;

int Rectangle::getObjCount() {
    return Rectangle::objCount;
}

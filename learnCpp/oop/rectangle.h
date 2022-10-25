//
// Created by julian on 10/25/22.
//

#ifndef LEARNCPP_RECTANGLE_H
#define LEARNCPP_RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    ~Rectangle();
    void draw();
    int getarea();
    int getwidth();
    int setwidth(int width);
    int getHeight() const;
    void setHeight(int height);

    static int getObjCount();
private:
    int width;
    int height;
    static int objCount;
    basic_string<char> color;

};


#endif //LEARNCPP_RECTANGLE_H

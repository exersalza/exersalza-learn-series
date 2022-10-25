//
// Created by julian on 10/25/22.
//

#ifndef LEARNCPP_LENGTH_H
#define LEARNCPP_LENGTH_H

#include <compare>
#include <ostream>
#include <istream>

using namespace std;

class Length {
public:
    explicit Length(int value);

    int getValue() const;
    void setValue(int value);

    bool operator==(int rhs) const;
    bool operator==(const Length& rhs) const;
    strong_ordering operator<=>(const Length& rhs) const;
    Length operator+(const Length& rhs) const;
    Length& operator+=(const Length& rhs);
    Length& operator=(const Length& rhs);
    operator int() const;
private:
    int value;
    int x;
    friend ostream& operator<<(ostream& stream, const Length& length);
};

ostream& operator<<(ostream& stream, const Length& length);
istream& operator>>(istream& stream, Length& length);

#endif //LEARNCPP_LENGTH_H
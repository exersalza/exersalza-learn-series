//
// Created by julian on 10/25/22.
//

#include "Length.h"
#include <compare>

Length::Length(int value) : value(value) {}

bool Length::operator==(const Length &rhs) const {
    return (value == rhs.value);
}

bool Length::operator==(const int rhs) const {
    return (value == rhs);
}

std::strong_ordering Length::operator<=>(const Length &rhs) const {
    return value <=> rhs.value;
}

int Length::getValue() const {
    return value;
}

void Length::setValue(int value) {
    Length::value = value;
}

ostream &operator<<(ostream &stream, const Length &length) {
    stream << length.getValue();
    return stream;
}

Length Length::operator+(const Length &rhs) const {
    return Length(value + rhs.value);
}

Length &Length::operator+=(const Length &rhs) {
    value += rhs.value;
    return *this;
}

Length &Length::operator=(const Length &rhs) {
    value = rhs.value;
    return *this;
}

Length::operator int() const {
    return value;
}

istream &operator>>(istream &stream, Length &length) {
    int value;
    stream >> value;
    length.setValue(value);
    return stream;
};

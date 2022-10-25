//
// Created by julian on 6/7/22.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;


int main() {
    double number = 12.34;
    stringstream stream;
    stream << fixed << setprecision(2) << number;
    string str = stream.str();
    cout << str;

    return 0;
}
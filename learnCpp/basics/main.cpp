//
// Created by julian on 6/7/22.
//

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() {
    ifstream file;
    string str;
    file.open("../basics/data");
    if (file.is_open()) {
        while (!file.eof()) {
            getline(file, str);
            cout << str << endl;
        }
        file.close();
    }

    return 0;
}
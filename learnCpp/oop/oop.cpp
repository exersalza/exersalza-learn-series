//
// Created by julian on 10/25/22.
//

#include <iostream>
#include "TextBox.h"

using namespace std;

int main() {
    TextBox box;
    box.enable();
    cout << box.isEnabled() << endl;
    return 0;
}
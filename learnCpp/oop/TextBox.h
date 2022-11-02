//
// Created by julian on 10/25/22.
//

#ifndef LEARNCPP_TEXTBOX_H
#define LEARNCPP_TEXTBOX_H

#include <string>
#include "Widget.h"

using namespace std;

class TextBox : public Widget{
public:
    TextBox() = default;
    explicit TextBox(string& value);
    string getValue();
    void setValue(string& value);
private:
    string value;
};


#endif //LEARNCPP_TEXTBOX_H

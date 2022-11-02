//
// Created by julian on 10/25/22.
//

#include "TextBox.h"

TextBox::TextBox(string &value) : value(value){

}

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(string &value) {
    this->value = value;
}

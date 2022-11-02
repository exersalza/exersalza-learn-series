//
// Created by julian on 10/25/22.
//

#include "Widget.h"


void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}


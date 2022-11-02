//
// Created by julian on 10/25/22.
//

#ifndef LEARNCPP_WIDGET_H
#define LEARNCPP_WIDGET_H


class Widget {
public:
    Widget();
    void enable();
    void disable();
    bool isEnabled() const;
private:
    bool enabled;
protected:
    int width;
};


#endif //LEARNCPP_WIDGET_H

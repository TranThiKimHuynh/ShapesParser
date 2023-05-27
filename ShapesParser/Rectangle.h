#pragma once
#include"main.h"


class Rectangle : public Shape {
private:
    float _height;
    float _width;
public:
    Rectangle(float height, float width);
public:
    float area();

    float circumference();
public:
    float getHeight();
    float getWidth();
    void setHeight(float height);
    void setWidth(float width);
public:

    void display();

    string toString() {
        return "Rectangle";
    }
};

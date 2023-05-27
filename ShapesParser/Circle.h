#pragma once
#include"main.h"

class Circle : public Shape {
private:
    float _radius;
public:
    Circle(float r);
public:
    float area();

    float circumference();

public:
    float getRadius();

    void setRadius(float r);

    void display();

    string toString() {
        return "Circle";
    }
};

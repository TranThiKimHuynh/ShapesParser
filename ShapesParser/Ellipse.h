#pragma once
#include"main.h"


class Ellipse: public Shape {
private:
    float _majorAxis;
    float _minorAxis;
public:
    Ellipse(float majorAxis, float minorAxis);
public:
    float area();

    float circumference();
public:
    float getMajorAxis();
    float getMinorAxis();
    void setMajorAxis(float majorAxis);
    void setMinorAxis(float minorAxis);
public:

    void display();

    string toString() {
        return "Ellipse";
    }
};

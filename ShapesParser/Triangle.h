#pragma once
#include"main.h"

class Triangle : public Shape {
private:
    float _aside1;
    float _aside2;
    float _aside3;

public:
    Triangle(float a,float b, float c);
public:
    float area();

    float circumference();

public:
    float getAside1();
    float getAside2();
    float getAside3();

    void setAside1(float a);
    void setAside2(float b);
    void setAside3(float c);

    void display();

    string toString() {
        return "Triangle";
    }
};

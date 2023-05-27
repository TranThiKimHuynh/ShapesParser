#pragma once
#include"main.h"


class Rhombus : public Shape {
private:
    float _diagonal1;
    float _diagonal2;
public:
    Rhombus(float diagonal1, float diagonal2);
public:
    float area();

    float circumference();
public:
    float getDiagonal1();
    float getDiagonal2();
    void setDiagonal1(float height);
    void setDiagonal2(float width);
public:

    void display();

    string toString() {
        return "Rhombus";
    }
};

#pragma once
#include"main.h"

class Square : public Shape {
private:
    float _side;

public:
    Square(float side);

public:

    float area();

    float circumference();
public:
    float getSide();

    void setSide(float side);

    void display();

    string toString() {
        return "Square";
    }

};
#pragma once
#include"main.h"

// Apply Startegy Design Pattern for Display Shape
class DisplayStrategy {
public:
    virtual void display(vector<shared_ptr<Shape>> shapes) = 0;

};
/// <summary>
/// In thong tin la cac thuoc tinh co ban cua tung loai hinh
/// </summary>
class DisplayBasicInfor : public DisplayStrategy {
public:
    void display(vector<shared_ptr<Shape>> shapes);
};
/// <summary>
/// In thong tin la cac thuoc tinh co ban , chu vi , dien tich cua tung loai hinh
/// </summary>
class DisplayFullInfor : public DisplayStrategy {
public:
    void display(vector<shared_ptr<Shape>> shapes);
};

class DisplayListShape :public Object {
private:
    shared_ptr<DisplayStrategy> _displayShapes;
public:
    DisplayListShape(shared_ptr<DisplayStrategy> dpShape);

    void setTypeDisplay(shared_ptr<DisplayStrategy>dpShape);

    void performTypeOfDisplay(vector<shared_ptr<Shape>> shapes);

    string toString() {
        return "DisplayListShape";
    }

};

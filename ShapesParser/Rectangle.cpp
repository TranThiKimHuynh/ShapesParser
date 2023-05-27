#include"Rectangle.h"


/// <summary>
/// Ham khoi tao cua hinh chu nhat
/// </summary>
/// <param name="height">chieu dai</param>
/// <param name="width">chieu rong</param>
Rectangle::Rectangle(float height, float width) {
    _height = height;
    _width = width;
    _name = "Hinh chu nhat";
}
/// <summary>
/// Ham tinh dien tich cua hinh chu nhat
/// </summary>
/// <returns>dien tich</returns>
float Rectangle::area() {
    float res = _height * _width;
    return res;
}
/// <summary>
/// Ham tinh chu vi cua hinh chu nhat
/// </summary>
/// <returns>chu vi</returns>
float Rectangle::circumference() {
    float res = (_height + _width) * 2;
    return res;
}

/// <summary>
/// Getter chieu dai hinh chu nhat
/// </summary>
/// <returns>chieu dai </returns>
float Rectangle::getHeight() { return _height; }

/// <summary>
/// Getter chieu rong hinh chu nhat
/// </summary>
/// <returns>chieu rong</returns>
float Rectangle::getWidth() { return _width; }

/// <summary>
/// Setter chieu dai hinh chu nhat
/// </summary>
/// <param name="height">chieu dai</param>
void Rectangle::setHeight(float height) { _height = height; }

/// <summary>
/// Setter chieu rong hinh chu nhat
/// </summary>
/// <param name="width">chieu rong</param>
void Rectangle::setWidth(float width) { _width = width; }

/// <summary>
/// In ra thong tin cua hinh chu nhat
/// </summary>
void Rectangle::display() {
    string res;
    res = "Rong= " + to_string(_width) + ", Cao=" + to_string(_height);
    cout << res;
}


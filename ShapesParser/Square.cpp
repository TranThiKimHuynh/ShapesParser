#include"Square.h"

/// <summary>
/// Ham khoi tao hinh vuong
/// </summary>
/// <param name="side">canh cua hinh vuong</param>
Square::Square(float side) {
    _side = side;
    _name = "Hinh vuong";
}
/// <summary>
/// Ham tinh dien tich hinh vuong
/// </summary>
/// <returns>dien tich </returns>
float Square::area() {
    float res = _side * _side;
    return res;
}
/// <summary>
/// Ham tinh chu vi hinh vuong
/// </summary>
/// <returns>chu vi</returns>
float Square::circumference() {
    float res = _side * 4;
    return res;
}
/// <summary>
/// getter of Square class
/// </summary>
/// <returns>canh hinh vuong</returns>
float Square::getSide() { return _side; }

/// <summary>
/// setter of Square class
/// </summary>
/// <param name="side">canh hinh vuong</param>
void Square::setSide(float side) { _side = side; }

/// <summary>
/// In ra thong tin cua hinh vuong
/// </summary>
void Square::display() {
    string res;
    res = "Canh= " + to_string(_side);
    cout << res;
}

#include"Circle.h"

/// <summary>
/// Ham khoi tao cua lop hinh tron
/// </summary>
/// <param name="r">ban kinh </param>
Circle::Circle(float r) {
    _radius = r;
    _name = "Hinh tron";
}

/// <summary>
/// Ham tinh dien tich hinh tron
/// </summary>
/// <returns>dien tich</returns>
float Circle::area() {
    float res = _radius * _radius * Pi;
    return res;
}
/// <summary>
/// Ham tinh chu vi hinh tron
/// </summary>
/// <returns>chu vi</returns>
float Circle::circumference() {
    float res = 2 * Pi * _radius;
    return res;
}
/// <summary>
/// Getter of Circle Class
/// </summary>
/// <returns>ban kinh</returns>
float Circle::getRadius() { return _radius; }

/// <summary>
/// Setter of Circle Class
/// </summary>
/// <param name="r">ban kinh</param>
void Circle::setRadius(float r) { _radius = r; }

/// <summary>
/// In ra thong tin hinh tron 
/// </summary>
void Circle::display() {
    string res;
    res = "Ban kinh= " + to_string(_radius);
    cout << res;
}


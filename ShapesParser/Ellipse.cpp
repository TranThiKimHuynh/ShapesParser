#include"Ellipse.h"

/// <summary>
/// Constructor of Ellipse Class
/// </summary>
/// <param name="majorAxis">truc lon</param>
/// <param name="minorAxis">truc nho</param>
Ellipse::Ellipse(float majorAxis, float minorAxis) {
	_majorAxis = majorAxis;
	_minorAxis = minorAxis;
	_name = "Hinh Ellipse";
}
/// <summary>
/// Ham tinh dien tich 
/// </summary>
/// <returns></returns>
float Ellipse::area() {
	float a = _majorAxis / 2;
	float b = _minorAxis / 2;
	float h = ((a - b) * (a - b)) / ((a + b) * (a + b));
	float res = 3.14 * (a + b) * (1 + ((3 * h) / (10 + sqrt(4 - 3 * h))));
	return res;
}
/// <summary>
/// Ham tinh chu vi
/// </summary>
/// <returns></returns>
float Ellipse::circumference() {
	return 3.14 * (_majorAxis / 2) * (_minorAxis / 2);
}
/// <summary>
/// Lay do dai truc lon
/// </summary>
/// <returns>do dai truc lon</returns>
float Ellipse::getMajorAxis() { return _majorAxis; }

/// <summary>
/// Lay do dai truc nho
/// </summary>
/// <returns>do dai truc nho</returns>
float Ellipse::getMinorAxis() { return _minorAxis; }

/// <summary>
/// Gan chieu dai truc lon
/// </summary>
/// <param name="majorAxis">chieu dai truc lon</param>
void Ellipse::setMajorAxis(float majorAxis) { _majorAxis = majorAxis; }
/// <summary>
/// Gan chieu dai truc nho
/// </summary>
/// <param name="minorAxist">chieu dai truc nho</param>
void Ellipse::setMinorAxis(float minorAxist) { _minorAxis = minorAxist; }

/// <summary>
/// In thong tin cua hinh Ellipse
/// </summary>
void Ellipse::display() {
	string res;
	res = "Truc lon= " + to_string(_majorAxis) + ", Truc nho=" + to_string(_minorAxis);
	cout << res;
}


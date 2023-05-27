#include"Rhombus.h"

/// <summary>
/// Constructor of Rhomnus Class
/// </summary>
/// <param name="diagonal1">duong cheo 1</param>
/// <param name="diagonal2">duong cheo 2</param>
Rhombus::Rhombus(float diagonal1, float diagonal2) {
	_diagonal1 = diagonal1;
	_diagonal2 = diagonal2;
	_name = "Hinh thoi";

}
/// <summary>
/// Ham tinh dien tich
/// </summary>
/// <returns></returns>
float Rhombus::area() {
	float res = (_diagonal1 * _diagonal2) / 2;
	return res;
}

/// <summary>
/// Ham tinh chu vi
/// </summary>
/// <returns></returns>
float Rhombus::circumference() {
	float res = 4 * sqrt((_diagonal1 * _diagonal1 + _diagonal2 * _diagonal2) / 4);
	return res;
}

/// <summary>
/// Lay ra do dai cua duong cheo 1
/// </summary>
/// <returns>do dai cua duong cheo 1</returns>
float Rhombus::getDiagonal1() { return _diagonal1; }

/// <summary>
/// Lay ra do dai cua duong cheo 2
/// </summary>
/// <returns>do dai duong cheo 2</returns>
float Rhombus::getDiagonal2(){ return _diagonal2; }

/// <summary>
/// Gan do dai cho duong cheo 1
/// </summary>
/// <param name="diagonal1">do dai duong cheo 1</param>
void Rhombus::setDiagonal1(float diagonal1) { _diagonal1 = diagonal1; }

/// <summary>
/// Gan do dai cho duong cheo 2
/// </summary>
/// <param name="diagonal2">do dai duong cheo 2</param>
void Rhombus::setDiagonal2(float diagonal2) { _diagonal2 = diagonal2; }

/// <summary>
/// In ra thong tin cua hinh thoi
/// </summary>
void Rhombus::display() {
	string res;
	res = "Duong cheo 1= " + to_string(_diagonal1) + ", Duong cheo 2=" + to_string(_diagonal2);
	cout << res;
}


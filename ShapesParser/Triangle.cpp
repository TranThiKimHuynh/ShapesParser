#include"Triangle.h"


/// <summary>
/// 
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="c"></param>
Triangle::Triangle(float a, float b, float c){
    _aside1 = a;
    _aside2= b;
    _aside3 = c;
    _name = "Hinh tam giac";
}
/// <summary>
/// Ham tinh dien tich cua hinh tam giac
/// </summary>
/// <returns>dien tich</returns>
float Triangle::area() {
    float p = (_aside1 + _aside2 + _aside3) / 2;
    float res = sqrt(p * (p - _aside1) * (p - _aside2) * (p - _aside3));
    return res;
}
/// <summary>
/// Ham tinh chu vi cua hinh tam giac
/// </summary>
/// <returns>chu vi</returns>
float Triangle::circumference() {
    float res = _aside1 + _aside2 + _aside3;
    return res;
}

/// <summary>
/// Lay thong tin canh 1 cua tam giac
/// </summary>
/// <returns> canh 1</returns>
float Triangle::getAside1() { return _aside1; }

/// <summary>
/// Lay thong tin canh 2 cua tam giac
/// </summary>
/// <returns> canh 2</returns>
float Triangle::getAside2() { return _aside2; }

/// <summary>
/// Lay thong tin canh 3 cua tam giac
/// </summary>
/// <returns> canh 3</returns>
float Triangle::getAside3() { return _aside3; }

/// <summary>
/// Gan gia tri cho canh 1 cua tam giac
/// </summary>
/// <param name="a">do dai canh 1</param>
void Triangle::setAside1(float a) { _aside1= a; }

/// <summary>
/// Gan gia tri cho canh 2 cua tam giac
/// </summary>
/// <param name="b">do dai canh 2</param>
void Triangle::setAside2(float b) { _aside2 = b; }

/// <summary>
/// Gan gia tri cho canh 3 cua tam giac
/// </summary>
/// <param name="c">do dai canh 3</param>
void Triangle::setAside3(float c) { _aside3 = c; }

/// <summary>
/// In ra thong tin cua hinh tam giac
/// </summary>
void Triangle::display() {
    string res;
    res = "Canh 1= " + to_string(_aside1) + ", Canh 2=" + to_string(_aside2) + ", Canh 3="+to_string(_aside3);
    cout << res;
}


#include"Display.h"

/// <summary>
/// In thong tin co ban cua danh sach cac hinh
/// </summary>
/// <param name="shapes">vector chua danh sach cac hinh</param>
void DisplayBasicInfor::display(vector<shared_ptr<Shape>> shapes) {

    for (int i = 0; i < shapes.size(); i++) {
        cout << i + 1 << ". " << shapes[i]->getName() << ": ";  shapes[i]->display(); cout << endl;
    }
}
/// <summary>
/// In thong tin co ban kem chu vi dien tich cua tung hinh 
// Chu vi lam tron 1 chu thap phan, dien tich lam tron 2 chu so thap phan
/// </summary>
/// <param name="shapes">vector chua danh sach cac hinh</param>
void  DisplayFullInfor::display(vector<shared_ptr<Shape>> shapes) {

    for (int i = 0; i < shapes.size(); ++i) {
        cout << "| " << left << setw(2) << i + 1 << " | "
            << left << setw(15) << shapes[i]->getName() << " | " << setw(50);  shapes[i]->display(); cout << " | "
            << "Chu vi=" << setw(6) << fixed << setprecision(1) << shapes[i]->circumference() << " | "
            << "Dien tich=" << setw(6) << fixed << setprecision(2) << shapes[i]->area() << " |" << endl;

    }
}

/// <summary>
/// Goi loai display tuong ung
/// </summary>
/// <param name="dpShape">Kieu display tuong ung</param>
DisplayListShape::DisplayListShape(shared_ptr<DisplayStrategy> dpShape) {
    _displayShapes = dpShape;
}
/// <summary>
/// Gan kieu display tuong ung
/// </summary>
/// <param name="dpShape">Kieu display tuong ung</param>
void DisplayListShape::setTypeDisplay(shared_ptr<DisplayStrategy>dpShape) {
    this->_displayShapes = dpShape;
}
/// <summary>
/// bieu dien phuong thuc display
/// </summary>
/// <param name="shapes">danh sach cac hinh </param>
void DisplayListShape::performTypeOfDisplay(vector<shared_ptr<Shape>> shapes) {
    _displayShapes->display(shapes);
}
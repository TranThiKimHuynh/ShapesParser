#include "main.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Parser.h"
#include "Display.h"


int main()
{
    ParserFactory factory;  // single source of truth - Singleton Pattern - Factory Pattern
    factory.registerWith("Square", make_shared<SquareParser>());
    factory.registerWith("Circle", make_shared<CircleParser>());
    factory.registerWith("Rectangle", make_shared<RectangleParser>());
    factory.registerWith("Triangle", make_shared<TriangleParser>());
    factory.registerWith("Rhombus", make_shared<RhombusParser>());
    factory.registerWith("Ellipse", make_shared<EllipseParser>());

    string input = "shapes.txt";
    ifstream reader(input, ios::in);
    string line;
    getline(reader, line);

    int count = stoi(line);
    vector<shared_ptr<Shape>> shapes;
 
    for (int i = 0; i < count; i++) {
        getline(reader, line);
        stringstream buffer(line);
        string type;
        string data;
        getline(buffer, type, ':');
        getline(buffer, data);

        shared_ptr<IParser> parser = factory.select(type);
        if (parser != nullptr) {
            shared_ptr<Shape > shape = parser->parse(stringstream(data));
            if (shape != nullptr) {
                shapes.push_back(shape);
            }
        }
    }

    reader.close();

    cout << "Dang doc tap tin  " << input << "..." << endl;
    if (count == shapes.size()) {
        cout << "Tim thay " << shapes.size() << " hinh" << endl;
    }
    else {
        cout << "Tim thay " << shapes.size() << " hinh / "<<count<<" hinh" << endl;
    }

    DisplayListShape displayShapes(make_shared<DisplayBasicInfor>());
    displayShapes.performTypeOfDisplay(shapes);

    // TH co hinh bi loi khong doc duoc
    if (count > shapes.size()) {
        cout << "Khong the doc duoc: " << count - shapes.size() << " hinh." << endl;
    }

    // Sort the shape base on area
    sort(shapes.begin(), shapes.end(), [](const shared_ptr<Shape>a, const shared_ptr<Shape> b) {
        return a->area() < b->area();
    });

    displayShapes.setTypeDisplay(make_shared<DisplayFullInfor>());
    displayShapes.performTypeOfDisplay(shapes);
   
}

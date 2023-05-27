#pragma once
#include"main.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Rhombus.h"
#include "Ellipse.h"

class IParser : public Object {
public:
    virtual shared_ptr<Shape> parse(stringstream data) = 0;

    string toString() { return "IParser"; }
};

// Inversion of control -> Dependency injection level 1

class ParserFactory : public Object {
private:
    map<string, shared_ptr<IParser> > _prototypes;
public:
    void registerWith(string type, shared_ptr<IParser> parser);
public:
    // Cấu hình - single source of truth
    shared_ptr<IParser> select(string type);

    string toString() { return "ParserFactory"; }

};


class SquareParser : public IParser {
public:
  
    shared_ptr<Shape>  parse(stringstream data);
};

class CircleParser : public IParser {
public:
   
    shared_ptr<Shape> parse(stringstream data);

    
};

class RectangleParser : public IParser {
public:
    
    shared_ptr<Shape>  parse(stringstream data);
};

class TriangleParser : public IParser {

    shared_ptr<Shape>  parse(stringstream data);
};

class RhombusParser : public IParser {
public:

    shared_ptr<Shape>  parse(stringstream data);
};

class EllipseParser : public IParser {
public:

    shared_ptr<Shape>  parse(stringstream data);
};
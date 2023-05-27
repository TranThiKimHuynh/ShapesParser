#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <algorithm> 
#include<memory>
#include <stdexcept>
#include<iomanip>
#define Pi 3.14
using std::cout, std::endl;
using std::vector;
using std::string, std::stringstream;
using std::ifstream, std::ios;
using std::map;
using std::to_string;
using std::shared_ptr, std::make_shared;
using std::invalid_argument, std::out_of_range;
using std::left, std::setw, std::fixed, std::setprecision;


class Object {
public:
    virtual string toString() = 0;
};


class Shape : public Object {
protected:
    string _name;
public:
    string getName() { return _name; };
    void Name(string name) { _name = name; }

    virtual float area() = 0;
    virtual float circumference() = 0;
    virtual void display() = 0;
    string toString() { return "Shape"; }
};


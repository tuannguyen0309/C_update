#pragma once
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Geometry
{
public:
    virtual double perimeter() = 0;
    virtual double area() = 0;
    virtual void display()
    {
        cout << "Perimeter: " << perimeter() << endl;
        cout << "Area: " << area() << endl;
    }
};
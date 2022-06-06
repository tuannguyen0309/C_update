#pragma once
#include "Geometry.cpp"
class Rectangle : public Geometry
{
private:
    int w;
    int h;

public:
    double perimeter()
    {
        return (w + h) * 2;
    }
    Rectangle(int w, int h) : w(w), h(h) {}
    double area()
    {
        return w * h;
    }
};
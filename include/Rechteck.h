#ifndef RECHTECK_H
#define RECHTECK_H

#include <iostream>
#include "ZeichenElement.h"

class Rechteck : public ZeichenElement 
{
public:
    Rechteck(Koordinate center = Koordinate(), int height = 3, int width = 5) : ZeichenElement(center), height(height), width(width) {}
    int getHeight();
    int getWidth();
    virtual double getArea();
    virtual double getCircumrefrence();
    virtual ZeichenType getType();
    operator std::string() const;

private:
    int height;
    int width;
};

#endif

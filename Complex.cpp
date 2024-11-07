//========================================================
// put all group names here
// Complex.cpp
// Fall 2024
// This file contains the class methods for the
// Complex number class.
//========================================================

#include "Complex.h"
#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;

//========================================================
// default constructor
// Developer: Sunho Kim
//========================================================
Complex::Complex()
{
    a = 0;
    b = 0;
}
//========================================================
// copy constructor
// Developer: Sunho Kim
//========================================================
Complex::Complex(const Complex &c)
{
    a = c.a;
    b = c.b;
}
//========================================================
// Complex(a,b) constructor
// Developer: Sunho Kim
//========================================================
Complex::Complex(double x, double y)
{
    a = x;
    b = y;
}
//========================================================
// destructor
// Developer: IyiOluwa Adaramola
//========================================================
Complex::~Complex(void)
{
}

//========================================================
// setReal access method
//========================================================

//========================================================
// getReal access method
//========================================================

//========================================================
// setImag
//========================================================

//========================================================
// getImag
//========================================================

//========================================================
// assignment operator
//========================================================

//========================================================
// addition operators
// Developer: Sunho Kim
//========================================================
Complex Complex::operator+(const Complex &c) const
{
    Complex comp;

    comp.a = a + c.a;
    comp.b = b + c.b;

    return comp;
}
Complex Complex::operator+(double f) const
{
    Complex comp;

    comp.a = a + f;
    comp.b = b;

    return comp;
}
Complex Complex::operator+(int i) const
{
    Complex comp;
    comp.a = a + i;
    comp.b = b;

    return comp;
}
//========================================================
// subtraction operators
// Developer: Sunho Kim
//========================================================
Complex Complex::operator-(const Complex &c) const
{
    Complex comp;

    comp.a = a - c.a;
    comp.b = b - c.b;

    return comp;
}
Complex Complex::operator-(double f) const
{
    Complex comp;

    comp.a = a - f;
    comp.b = b;

    return comp;
}
Complex Complex::operator-(int i) const
{
    Complex comp;
    comp.a = a - i;
    comp.b = b;

    return comp;
}
//========================================================
// multiplication operators
//========================================================

//========================================================
// division operators
//========================================================

//========================================================
// exponentiation
//========================================================

//========================================================
// operator~
//========================================================

//========================================================
// abs
//========================================================

//========================================================
// equality operator
//========================================================

//========================================================
// inequality operator
//========================================================

//========================================================
// overload >> for cin
//========================================================

//========================================================
// overload << for cout
// Developer: Sunho Kim
//========================================================
ostream &operator<<(ostream &os, const Complex &c)
{
    if (c.a == 0)
    {
        os << c.b << "i";
    }
    else if (c.b == 0)
    {
        os << c.a;
    }
    else
    {
        os << c.a << c.b << "i";
    }
}

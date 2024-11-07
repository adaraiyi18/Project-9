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
// Developer: IyiOluwa Adaramola
//========================================================
void Complex::setReal(double r)
{
    a = r;
}
//========================================================
// getReal access method
// Developer: IyiOluwa Adaramola
//========================================================
double Complex::getReal (void) const
{
    return a;
}
//========================================================
// setImag
// Developer: IyiOluwa Adaramola
//========================================================
void Complex::setImag(double r)
{
    b = r;
}
//========================================================
// getImag
// Developer: IyiOluwa Adaramola
//========================================================
double Complex::getImag (void) const
{
    return b;
}
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
// c1.abs()
// Returns the distance from the origin (0,0) for c1 as a 
// real number
// PARAMETER:
// none
// RETURN VALUE:
// returns the square root of the sum of squares of a and b
// for *this
// Developer: IyiOluwa Adaramola
//========================================================
double abs(void) const
{
    if (a == 0 && b == 0){
        return 0.0;
    }
    return sqrt((a*a)+(b*b));
}
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

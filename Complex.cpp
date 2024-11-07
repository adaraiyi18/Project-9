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
// This constructor initializes a complex number with real and imaginary parts set to 0
//========================================================
Complex::Complex()
{
    a = 0;
    b = 0;
}
//========================================================
// copy constructor
// Developer: Sunho Kim
// This constructor creates a new complex number as a copy of an existing one
//========================================================
Complex::Complex(const Complex &c)
{
    a = c.a;
    b = c.b;
}
//========================================================
// Complex(a,b) constructor
// Developer: Sunho Kim
// This constructor creates a complex number with specified real and imaginary parts
//========================================================
Complex::Complex(double x, double y)
{
    a = x;
    b = y;
}
//========================================================
// destructor
//========================================================

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
// These operators handle addition of complex numbers with other complex numbers, doubles, and integers
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
// These operators handle subtraction of complex numbers with other complex numbers, doubles, and integers
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
// developer: Sunho Kim
// These operators handle multiplication of complex numbers with other complex numbers, doubles, and integers
//========================================================
Complex Complex::operator*(const Complex &c) const
{
    Complex comp;

    comp.a = a * c.a - b * c.b;
    comp.b = a * c.b + b * c.a;

    return comp;
}
Complex Complex::operator*(double f) const
{
    Complex comp;

    comp.a = a * f;
    comp.b = b*f;

    return comp;
}
Complex Complex ::operator*(int i) const
{
    Complex comp;

    comp.a = a * i;
    comp.b = b * i;

    return comp;
}
//========================================================
// division operators
// Developer: Sunho Kim
// These operators handle division of complex numbers with other complex numbers, doubles, and integers
//========================================================
Complex Complex::operator/(const Complex &c) const
{
    Complex comp;

    double denominator = c.a * c.a + c.b * c.b;
    comp.a = (a * c.a + b * c.b) / denominator;
    comp.b = (b * c.a - a * c.b) / denominator;

    return comp;
}
Complex Complex::operator/(double f) const
{
    Complex comp;
    comp.a = a / f;
    comp.b = b / f;

    return comp;
}
Complex Complex ::operator/(int i) const
{
    Complex comp;

    comp.a = a / i;
    comp.b = b / i;

    return comp;
}
//========================================================
// exponentiation
//========================================================

//========================================================
// operator~
//========================================================

//========================================================
// abs
// Developer: Sunho Kim
// This method calculates the absolute value (magnitude) of the complex number
//========================================================
double Complex::abs() const
{
    return sqrt(a * a + b * b);
}
//========================================================
// equality operator
// Developer: Sunho Kim
// This operator checks if two complex numbers are equal
//========================================================
bool Complex::operator==(const Complex &c) const
{
    return (a == c.a && b == c.b);
}
//========================================================
// inequality operator
// Developer: Sunho Kim
// This operator checks if two complex numbers are not equal
//========================================================
bool Complex::operator!=(const Complex &c) const {
    return (a != c.a || b != c.b);
}
//========================================================
// overload >> for cin
// Developer: Sunho Kim
// This operator handles the input of complex numbers
//========================================================
istream &operator>>(istream &is, Complex &c)
{
    is >> c.a >> c.b;
    return is;
}
//========================================================
// overload << for cout
// Developer: Sunho Kim
// This operator handles the output formatting of complex numbers
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
        if (c.b < 0)
        {
            os << c.a << c.b << "i";
        }
        else
        {
            os << c.a << "+" << c.b << "i";
        }
    }
    return os;
}
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
// Method name: Complex (default constructor)
// Developer: Sunho Kim
// Description:
//      Initializes a complex number with real and imaginary parts set to 0
// Parameters:
//      None
// Returns:
//      None, but creates a new Complex object with a=0 and b=0
//========================================================
Complex::Complex()
{
    a = 0;
    b = 0;
}
//========================================================
// Method name: Complex (copy constructor)
// Developer: Sunho Kim
// Description:
//      Creates a new complex number as a copy of an existing one
// Parameters:
//      const Complex &c - reference to existing Complex object to copy
// Returns:
//      None, but creates a new Complex object as an exact copy
//========================================================
Complex::Complex(const Complex &c)
{
    a = c.a;
    b = c.b;
}
//========================================================
// Method name: Complex
// Developer: Sunho Kim
// Description:
//      Creates a complex number with specified real and imaginary parts
// Parameters:
//      double x - real part
//      double y - imaginary part (defaults to 0 if not specified)
// Returns:
//      None, but creates a new Complex object with specified values
//========================================================
Complex::Complex(double x, double y)
{
    a = x;
    b = y;
}
//========================================================
// Method Name: operator~
// Developer : Aurora Hodar
// Description: returns the cojugate of the given complex number, which
//  means that it has the same real number but the imaginary number is
//  reversed.
// Parameters: void
// Returns:
//      Complex comp, which has the same real number but a reversed
//       imaginary number
//========================================================
Complex Complex::operator~(void) const
{
    Complex comp;

    comp.a = a;
    comp.b = -b;
    return comp;
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
double Complex::getReal(void) const
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
double Complex::getImag(void) const
{
    return b;
}
//========================================================
// Method Name:
// Developer: Aurora Hodar
// Description: Sets a complex number to be equal to another complex number
// Parameters:
//      const Complex &c: complex number to copy
// Returns:
//      Complex number equal to inputted one
//========================================================
Complex Complex::operator=(const Complex &c)
{
    Complex comp;
    comp.a = c.a;
    comp.b = c.b;

    return comp;
}

//========================================================
// Method name: operator+
// Developer: Sunho Kim
// Description:
//      Adds two complex numbers or a complex number
// Parameters:
//      const Complex &c - complex number to add
//      double f - floating point number to add
//      int i - integer to add
// Returns:
//      Complex - result of addition
//========================================================
Complex Complex::operator+(const Complex &c) const
{
    Complex comp;

    comp.a = a + c.a;
    comp.b = a + c.b;

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
// Method name: operator-
// Developer: Sunho Kim
// Description:
//      Subtracts two complex numbers or a scalar from a complex number
// Parameters:
//      const Complex &c - complex number to subtract
//      double f - floating point number to subtract
//      int i - integer to subtract
// Returns:
//      Complex - result of subtraction
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
// Method name: operator*
// Developer: Sunho Kim
// Description:
//      Multiplies two complex numbers or a complex number by a scalar
// Parameters:
//      const Complex &c - complex number to multiply by
//      double f - floating point number to multiply by
//      int i - integer to multiply by
// Returns:
//      Complex - result of multiplication
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
    comp.b = b * f;

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
// Method name: operator/
// Developer: Sunho Kim
// Description:
//      Divides two complex numbers or a complex number by a scalar
// Parameters:
//      const Complex &c - complex number to divide by (must not be zero)
//      double f - floating point number to divide by (must not be zero)
//      int i - integer to divide by (must not be zero)
// Returns:
//      Complex - result of division
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
Complex Complex::operator^(int p) const
{
    Complex comp;
    comp.a = pow(a, p);
    comp.b = pow(b, p);
    return comp;
}
//========================================================
// Method name: abs
// Developer: Sunho Kim
// Description:
//      Calculates the absolute value (magnitude) of the complex number
// Parameters:
//      None
// Returns:
//      double - the magnitude of the complex number (√(a² + b²))
//========================================================
double Complex::abs() const
{
    return sqrt(a * a + b * b);
}
//========================================================
// Method name: operator==
// Developer: Sunho Kim
// Description:
//      Checks if two complex numbers are equal
// Parameters:
//      const Complex &c - complex number to compare with
// Returns:
//      bool - true if both real and imaginary parts are equal, false otherwise
//========================================================
bool Complex::operator==(const Complex &c) const
{
    return (a == c.a && b == c.b);
}
//========================================================
// Method name: operator!=
// Developer: Sunho Kim
// Description:
//      Checks if two complex numbers are not equal
// Parameters:
//      const Complex &c - complex number to compare with
// Returns:
//      bool - true if either real or imaginary parts differ, false otherwise
//========================================================
bool Complex::operator!=(const Complex &c) const
{
    return (a != c.a || b != c.b);
}
//========================================================
// Method name: operator>>
// Developer: Sunho Kim
// Description:
//      Reads a complex number from an input stream
// Parameters:
//      istream &is - input stream to read from
//      Complex &c - complex number to store input in
// Returns:
//      istream& - reference to the input stream
//========================================================
istream &operator>>(istream &is, Complex &c)
{
    is >> c.a >> c.b;
    return is;
}
//========================================================
// Method name: operator<<
// Developer: Sunho Kim
// Description:
//      Formats and outputs a complex number to an output stream
// Parameters:
//      ostream &os - output stream to write to
//      const Complex &c - complex number to output
// Returns:
//      ostream& - reference to the output stream
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
    else if (c.a == 0 && c.b == 0)
    {
        os << "0";
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
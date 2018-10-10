//Include a local resource which contais declarations
#include "complex.h"

//Required to use the printing function
#include <iostream>

//This is how you can implement a function
//outside the definition of a class

//The implementation of the Complex contructor
//The Complex:: means that we want to implement
//a function which is defined inside
//the 'Complex' class
Complex::Complex(double re, double imag)
{
    //Because the constructor is a member function
    //it has a 0. parameter called 'this'
    //In this case it is a 'Complex *this'
    //Complex(Complex* this, double re, double im)

    //Because it is a pointer we use '->' operator
    //to reach its members

    //We are using this because the local variables i.e.:
    //the paramters of the functions ('re')
    //are hinding the class attributes because they have
    //the same names
    this->re = re;

    //In this case the input parameter won't hide
    //our class member variable 'im', so we do not
    //need to use the 'this' pointer explicitly
    im = imag;
}

void Complex::print()
{
    std::cout<<"re: "<<re<<" im: "<<im<<std::endl;
}

double Complex::Re(Complex z)
{
    //Although we are unable to reach the member variables
    //we can reach the private variables because we are inside
    //the namespace of the Complex class
    return z.re;
}

double Complex::Im(Complex z)
{
    return z.im;
}

Complex Complex::Conjugate(Complex z)
{
    z.im = -z.im;
    return z;
}

Complex Complex::operator+(const Complex &theOther) const
{
    Complex z(theOther.re + re, theOther.im + im);
    return z;
}

Complex Complex::operator-(const Complex &theOther) const
{
    return *this + -theOther;
    //alternative way
    // return *this + theOther.operator-();
}

Complex Complex::operator*(const Complex &theOther)const
{
    //theOther.im = 2.0; cannot be performed because theOther is const
    //this->re = 44.0;  cannot be performed because this method is const

    Complex z(theOther.re * this->re - theOther.im * this->im, this->re * theOther.im + this->im * theOther.re);
    return z;
}


Complex Complex::operator/(const Complex &theOther) const
{
    double den = theOther.re * theOther.re + theOther.im * theOther.im;
    Complex z = *this * Conjugate(theOther);
    z.re /= den;
    z.im /= den;
    return z;
}

Complex operator* (double d, const Complex& theOther)
{
    //If we do not create a conversion constructor
    //or remove the explicit keyword from our current constructor
    //we cannot use it to create a Complex from a double
    return theOther * d;
}

Complex operator- (double d, const Complex& theOther)
{
    //If we do not create a conversion constructor
    //or remove the explicit keyword from our current constructor
    //we cannot use it to create a Complex from a double
    return theOther - d;
}

Complex operator+ (double d, const Complex& theOther)
{
    //If we do not create a conversion constructor
    //or remove the explicit keyword from our current constructor
    //we cannot use it to create a Complex from a double
    return theOther + d;
}

Complex operator/ (double d, const Complex& theOther)
{
    double den = theOther.re * theOther.re + theOther.im*theOther.im;
    Complex z(theOther.re * d / den, theOther.im * d /den);
    return z;
}

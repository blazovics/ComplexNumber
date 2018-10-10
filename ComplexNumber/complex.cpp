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

//This include means that the contants of the file.
//In this case 'complex.h' will be copied here
#include "complex.h"

//Used for printing onto the console
#include <iostream>

int main()
{
    //Initialization of 3 complex number
    //Without parameters (re and im will be both 0.0)
    Complex c1;
    //With one paramter (im will be 0.0)
    Complex c2(10.0);
    //With two parameters
    Complex c3(10.0,0.1);

    //A simple printig function
    c1.print();
    c2.print();
    c3.print();

    //Here is how we can use a static function
    //First we should mark the namespace/class
    //than we can reach the functions
    double re = Complex::Re(c1);
    double im = Complex::Re(c2);

    std::cout<<"real part: "<<re<<std::endl;
    std::cout<<"im part: "<<im<<std::endl;

    //c3 won't change
    //c4 will be a new instance
    Complex c4 = Complex::Conjugate(c3);

    c1.print();
    c2.print();
    c3.print();
    c4.print();

    return 0;
}

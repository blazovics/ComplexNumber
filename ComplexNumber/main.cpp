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
    //c1.print();
    //c2.print();
    //c3.print();

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

    //c1.print();
    //c2.print();
    //c3.print();
    //c4.print();

    Complex c6 = c3*c4;
    Complex c7 = c3.operator*(c4);
    Complex c8 = c3/c4;

    //c3.print();
    //c4.print();
    //c6.print();
    //c7.print();
    //c8.print();

    //Implicit type casting
    Complex c9 = c3 * 3.0;
    Complex c10 = c3.operator * (3.0);

    Complex c11 = 10;

    Complex c12 = 3.1 * c3;
    Complex c13 = 2.2 / c3;
    Complex c14 = 2.2 - c3;
    Complex c15 = 2.2 + c3;

    c3.print();
    c9.print();
    c10.print();
    c11.print();
    c12.print();
    c13.print();
    c14.print();
    c15.print();


    return 0;
}

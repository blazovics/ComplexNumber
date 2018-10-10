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

    return 0;
}

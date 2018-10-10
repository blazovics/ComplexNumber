//preprocessor macros
// if not defined <Definition>
#ifndef COMPLEX_H
// define <Definition>
#define COMPLEX_H


class Complex
{
//not visible from outside
private:
    double re; //real
    double im; //imaginary
public:
    //Constructor with two input variable
    //Both input parameter has a default value 0.0
    //Therefore it can be used with only one parameter or without parameters

    //The explicit keyword does not allow us to use this contructor
    //a Converison constructor
    explicit Complex(double re = 0.0, double imag = 0.0);

    Complex(double re)
    {
        this->re = re;
    }

    //Member function for printing out the values
    void print();

    //static function which work without instance
    //therefore we could not reach the this pointer
    //and the member parameters and member functions
    //from these methods
    static double Re(Complex z);
    static double Im(Complex z);

    static Complex Conjugate(Complex z);

    //operator override member function
    //implemented inside the class declaration
    Complex operator-()const{
        Complex z(-re,-im);
        return z;
    }

    Complex operator+(const Complex& theOther)const;
    Complex operator-(const Complex& theOther)const;
    Complex operator*(const Complex& theOther)const;
    Complex operator/(const Complex& theOther)const;

    //because it is not a member function it should be the friend of
    //the Complex class to get access to its private class variables
    friend Complex operator/ (double d, const Complex& theOther);
};



//close the if statement (started at the begining of the file)
#endif // COMPLEX_H

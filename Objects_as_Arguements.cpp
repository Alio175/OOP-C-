#include <iostream>
using namespace std;

class complex
{
private:
    double re, im;

public:
    complex();                   // no arg
    complex(double r, double i); // 2 arg
    void showComplex() const;    // const

    void addComplex(complex c1, complex c2); // new
    void subcomplex(complex c1, complex c2);
    complex ConjComplex();
    complex negComplex(); //
};
// defintions
complex::complex()
{
    re = 0;
    im = 0;
}
complex::complex(double r, double i)
{
    re = r;
    im = i;
}
void complex::showComplex() const
{
    if (im >= 0)
    {
        cout << "Complex number is " << re << "+" << im << "i" << endl;
    }
    else
        cout << "Complex number is " << re << "" << im << "i" << endl;
}
void complex::addComplex(complex c1, complex c2)
{
    cout << "The Addition of ";
    re = c1.re + c2.re;
    im = c1.im + c2.im;
}

void complex::subcomplex(complex c1, complex c2)
{
    cout << "The subtraction of ";
    re = c1.re - c2.re;
    im = c1.im - c2.im;
}
complex complex::negComplex()
{
    complex temp;
    temp.re = -re;
    temp.im = -im;
    cout << "The negative of ";
    return temp;
}

complex complex::ConjComplex()
{
    complex temp1;
    temp1.re = re;
    temp1.im = -im;
    cout << "The Conjugate of ";
    return temp1;
}

int main()
{

    complex c1(2, 3);
    c1.showComplex();
    complex c2(3, 4.2);
    c2.showComplex();
    complex add;
    add.addComplex(c1, c2);
    add.showComplex();
    complex sub;
    sub.subcomplex(c1, c2); 
    sub.showComplex();
    complex neg;
    neg = c1.negComplex();
    neg.showComplex();
    complex conj;
    conj = c1.ConjComplex();
    conj.showComplex();

    return 0;
}
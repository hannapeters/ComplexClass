#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cstring>
#include <cmath>
class Complex{
    public:
    //constructors
      Complex(); 
      Complex(double r);
      constexpr Complex(double r, double i);
      constexpr Complex(const Complex &rhs);
    //member functions
    //add access real and imaginary
    double  getReal() const;
    double  getImag() const;
    Complex& operator=(const Complex&);
    void operator+=(const Complex&);
    void operator-=(const Complex&);
    void operator/=(const Complex&);
    void operator*=(const Complex&);
    private:
    double real, img;    

};
//declare non-member functions
double getReal(const Complex & b);
double getImag(const Complex & b);

 Complex operator+(const Complex &b);
 Complex operator-(const Complex &b);
 Complex operator+(const Complex &  a,const Complex & b);
 Complex operator-(const Complex &  a,const Complex & b);
 Complex operator*(const Complex &  a,const Complex & b);
 Complex operator/(const Complex & a,const Complex & b);

bool operator==(const Complex & a,const  Complex & b);
bool operator!=(const Complex & a,const Complex & b);
bool operator<( Complex & a, Complex & b);
double abs(Complex & a);

std::ostream& operator<<(std::ostream& os,const  Complex & b);
std::istream& operator>>(std::istream& is,  Complex & b);

constexpr Complex operator""_i(long double a);

#endif
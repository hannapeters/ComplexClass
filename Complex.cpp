#include "Complex.h"

//constructor implementations
 Complex::Complex(): real(0), img(0) {
}
 Complex::Complex(double r): real(r), img(0) {
}
 constexpr Complex::Complex(double r, double i): real(r), img(i) {
}
 constexpr Complex::Complex(const Complex &rhs): real(rhs.real), img(rhs.img){
}


//member function implementations
double Complex::getReal() const{
    return real;
}
double Complex::getImag() const{
    return img;
}

Complex& Complex::operator=(const Complex & b){
    real=b.real;
    img=b.img;
    return *this;
}

void Complex::operator+=(const Complex& b){
    real+=b.real;
    img+=b.img;   
}
void Complex::operator-=(const Complex& b){
    real-=b.real;
    img-=b.img; 
}

void Complex::operator/=(const Complex& b){
    Complex n(Complex(*this)*Complex(b.real,-b.img));
    double t= b.real*b.real+b.img*b.img;
    real=n.real/t;
    img=n.img/t;
}

void Complex::operator*=(const Complex& b){
    double r=(real*b.real)-(img*b.img);
    double i=(real*b.img)+(img*b.real);
    real=r;
    img=i;
}

//non-member function implementations
double getReal(const Complex & b) {
    return b.getReal();
}
double getImag(const Complex & b) {
    return b.getImag();
}

Complex operator+(const Complex &b){
    Complex ret(b);
    return ret;
}
Complex operator-(const Complex &b){
    double r=b.getReal();
    double i=b.getImag();

    Complex ret(-r,-i);
    
    return ret;
}
 Complex operator+(const Complex & a, const Complex & b){
    Complex temp(a);
    temp+=b;
    return temp;
}

 Complex operator-(const Complex & a,const Complex & b){
    Complex temp(a);
    temp-=b;
    return temp;
}

 Complex operator*(const Complex & a, const Complex & b){
    Complex temp(a);
    temp*=b;
    return temp;
}

 Complex operator/(const Complex & a,const Complex & b) {
    Complex temp(a);
    temp/=b;
    return temp;
}

bool operator==( const Complex & a, const Complex & b){
    if(getReal(a)==getReal(b) && getImag(a)==getImag(b)){
        return true;
    }
    return false;
}

bool operator!=(const Complex & a, const Complex & b){
    if(getReal(a)!=getReal(b) || getImag(a)!= getImag(b)){
        return true;
    }
    return false;
}

double abs(Complex & a){
    return hypot(getReal(a), getImag(a));
}

bool operator<( Complex & a,  Complex&  b){
    if(abs(a)<abs(b)){
        return true;
    }
    return false;
}


std::ostream & operator<<(std::ostream& os, const Complex& b) {
    os<<"("<< getReal(b)<<",";
    os <<getImag(b) <<")";
    os<<"\n";
    return os;
}

constexpr Complex operator""_i( long double a)
{
    Complex ret(0,a);
    return ret;
}

std::istream & operator>>(std::istream & is,  Complex & b) {
    double r;
    double i;
    is.ignore();
    is>>r;
    is.ignore();
    is>>i;
    b=Complex(r,i);
    return is;
}


    // int main(int argc, char **argv) {
    //  return 0;
    // }




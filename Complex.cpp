#include "Complex.h"
#include <math.h>

Complex::Complex(){
  Re = 0;
  Im = 0;
}

Complex::Complex(int Re, int Im)
{
  this->Im = Im;
  this->Re = Re;
}

Complex::Complex(const Complex &other)
{
  Re = other.Re;
  Im = other.Im;
}

int Complex::GetRe()
{
  return Re;
}

int Complex::GetIm()
{
  return Im;
}

void Complex::SetIm(int Im)
{
  this->Im = Im;
}

void Complex::SetRe(int Re)
{
  this->Re = Re;
}

Complex Complex::operator+(Complex a)
{
  return Complex(this->Re + a.Re, this->Im + a.Im);
}

Complex Complex::operator-(Complex a)
{
  return Complex(this->Re - a.Re, this->Im - a.Im);
}

Complex Complex::operator*(Complex a) // z = (a1a2 – b1b2) + (a1b2 + a2b1)i. (z1*z2)
{
  return Complex((this->Re * a.Re)-(this->Im * a.Im), (this->Re * a.Im) + (this->Im*a.Re));
}

Complex& Complex::operator=(const Complex &other)
{
  Re = other.Re;
  Im = other.Im;

  return *this;
}

bool Complex::operator==(Complex a) 
{
  if (this->Re == a.Re and this->Im == a.Im){
    return true;
  }
  return false;
}


std::ostream& operator<<(std::ostream &out, Complex a)
{
  out << a.Re << (a.Im > 0 ? " + " : " - ") << abs(a.Im) << "i" << std::endl;
  return out;
}

std::istream& operator>>(std::istream &in, Complex &a)
{
  in >> a.Re;
  in >> a.Im;

  return in;
}

//методы доп. заданий

#include "Complex.h"

Complex::Complex(){
  Re = 0;
  Im = 0;
}

Complex::Complex(int Im, int Re)
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

//void Complex::SetIm(int Im)
//{
//  this->Im = Im;
//}

//void Complex::SetRe(int Re)
//{
//this->Re = Re;
//}

Complex::operator+(Complex a)
{
  Complex c;
  c.Re = this.Re + a.Re;
  c.Im = this.Im + a.Im;

  return c;
}
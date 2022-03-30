#include "Complex.h"

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
#include <iostream>
#include "classes/Complex.h"

int main()
{
  Complex a(2, 1);
  Complex b(3, 2);
  Complex c;

  c = a + b;

  std::cout<< c.GetRe() << c.GetIm()<< std::endl;

  return 0;
}
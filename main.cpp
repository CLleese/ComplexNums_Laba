#include <iostream>
#include "Complex.h"

int main()
{
  Complex a(1, 0);
  Complex b(0, 2);
  Complex c;

  c = a + b;

  std::cout<< c.GetRe() << " + " << c.GetIm() << "i" << std::endl;

  return 0;
}
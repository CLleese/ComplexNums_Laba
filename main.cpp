#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
  Complex a(2, -1);
  Complex b(3, 2);
  Complex c;

  cout << a - b;


  return 0;
}
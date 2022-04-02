#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
  Complex a(2, 5);
  Complex b = a;
  Complex c;

  cout << "Введите комплексное число в виде Re Im:";
  cin >> c;

  //демонстрация перегруженых функций
  cout << "a + b = " << a + b;
  cout << "a - b = " << a - b;
  cout << "a * b = " << a * b;
  cout << "a / b = " << a / b;

  if(a == c){
    cout << "a = c" << endl;
  }

  //демонстрация методов доп. заданий
  cout << "положительная степень: " <<a.IntPow(2);
  cout << "отрицательная степень: " << a.IntPow(-2);
  a.DrobPow(2, 5).PrintTrigForm(); cout << " : дробная степень в тригонометрической форме" << endl;



  return 0;
}
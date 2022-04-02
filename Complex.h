#include <iostream>

class Complex
{
public:
  Complex();
  Complex(double Re, double Im);
  Complex(const Complex &other);

  double GetIm();
  void SetIm(double Im);
  double GetRe();
  void SetRe(double Re);

  Complex operator+(Complex a);
  Complex operator-(Complex a);
  Complex operator*(Complex a);
  Complex operator/(Complex a);

  Complex& operator=(const Complex &other);

  bool operator==(Complex a);

  friend std::ostream& operator<<(std::ostream &out, Complex a);
  friend std::istream& operator>>(std::istream &in, Complex &a);

  //методы доп. заданий
  
  double CalculateModule();
  Complex IntPow(int m);
  Complex DrobPow(int m, int n);
  void PrintTrigForm();


protected:
  double Im;
  double Re;
};


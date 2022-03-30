#include <iostream>

class Complex
{
public:
  Complex();
  Complex(int Re, int Im);
  Complex(const Complex &other);

  int GetIm();
  void SetIm(int Im);
  int GetRe();
  void SetRe(int Re);

  Complex operator+(Complex a);
  Complex operator-(Complex a);
  Complex operator*(Complex a);
  Complex operator/(Complex a);

  Complex& operator=(const Complex &other);

  bool operator==(Complex a);

  friend std::ostream& operator<<(std::ostream &out, Complex a);
  friend std::istream& operator>>(std::istream &in, Complex &a);

  //методы доп. заданий

protected:
  int Im;
  int Re;
};


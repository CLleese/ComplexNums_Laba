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

protected:
  int Im;
  int Re;
};

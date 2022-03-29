class Complex
{
public:
  Complex();
  Complex(int Im, int Re);
  Complex(const Complex &other);

  int GetIm();
  //void SetIm(Im);
  int GetRe();
  //void SetRe(Re);

  Complex operator+(Complex a);

protected:
  int Im;
  int Re;
};

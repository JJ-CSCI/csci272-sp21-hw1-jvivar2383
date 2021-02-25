
#include <iostream>

class Binomial {
  float coeff1;
  float coeff2;
  int exponent1;
  int exponent2;
  
  public:
  Binomial(float new_coeff1 = 1.0, int new_exponent1 = 1, float new_coeff2 = 1.0, int new_exponent2 = 1){
    coeff1 = new_coeff1;
    coeff2 = new_coeff2;
    exponent1 = new_exponent1;
    exponent2 = new_exponent2;
    if(exponent1 < 0){
      exponent1 = 1;
    }
    if(exponent2 <0){
      exponent2 = 1;
    }
  }
  float GetCoefficient(int index_val);
  int GetPower(int index_val);
  int SetPower(int index_val, int new_exponent);
  int Add(const Binomial B);
  void Multiply(float num);
  void Multiply(float num, int pow_val);
};

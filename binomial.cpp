
#include "binomial.h"
#include <iostream>

/*Binomial::Binomial(float new_coeff1, unsigned int new_exponent1, float new_coeff2, unsigned int new_exponent2)
:coeff1(new_coeff1), coeff2(new_coeff2), exponent1(new_exponent1), exponent2(new_exponent2){}*/

float Binomial::GetCoefficient(int index_val){

  if(index_val == 1){
    return coeff1;
  }
  else if(index_val ==2){
    return coeff2;
  }
  else{
    return -1.0;
  }
}
int Binomial::GetPower(int index_val){

  if (index_val ==1){
    return exponent1;
  }
  else if(index_val == 2){
    return exponent2;
  }
  else{
    return -1;
  }

}
int Binomial::SetPower(int index_val, int new_exponent){

  if(new_exponent < 0){
    new_exponent = 1;
  }

  if(index_val ==1){
    exponent1 = new_exponent;
    return 0;
  }
  else if(index_val==2){
    exponent2 = new_exponent;
    return 0;
  }
  else{
    return -1;
  }

}

int Binomial::Add(const Binomial B){

  if(exponent1 == B.exponent1){
    coeff1 += B.coeff1;
    if(exponent2 == B.exponent2){
      coeff2 += B.coeff2;
    }
    return 0;
  }
  else if(exponent2 >1 && exponent2 == B.exponent2){
    coeff2 += B.coeff2;
    return 0;
  }
  else{
    return -1;
  }
}

void Binomial::Multiply(float num){
  coeff1 *= num;
  coeff2 *= num;
}
void Binomial::Multiply(float num, int pow_val){
  exponent1 += pow_val;
  exponent2 += pow_val;
  coeff1 *= num;
  coeff2 *= num;
}
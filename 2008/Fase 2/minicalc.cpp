#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int bits, dividendo, divisor, mdc;
  cin >> bits >> dividendo >> divisor;

  //restricoes
  if((bits >= 1 && bits <= 1000) &&
    (dividendo >= 1 && dividendo <= 268435456) &&
    (divisor >= 1 && divisor <= 268435456)) {
    
    if(dividendo <= divisor) mdc = dividendo;
    else mdc = divisor;
    
    while(true) {
      if(dividendo % mdc != 0 || divisor % mdc != 0) {
        mdc--;
      } else {
        dividendo /= mdc;
        divisor /= mdc;
        break;
      }
    }
    if(dividendo > bits || divisor > bits) {
      cout << "IMPOSSIVEL" << endl;
    } else {
      cout << dividendo << " " << divisor << endl;
    }
  }
}
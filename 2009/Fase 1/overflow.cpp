#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  int maximo, a, b;
  char operador;
  cin >> maximo >> a >> operador >> b;

  if(operador == '*') {
    if(a * b > maximo) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;
  } else if(operador == '+') {
    if(a + b > maximo) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;
  }
}
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int n;
  int maior = -1001;
  int soma;
  
  cin >> n;
  int vet[n];

  for(int i = 0; i < n; i++) {
    cin >> vet[i];
  }
  for(int i = 0; i < n - 3; i++) {
    soma = vet[i] + vet[i+1] + vet[i+2] + vet[i+3];
    if(soma > maior) maior = soma;
  }

  cout << maior << endl;
}
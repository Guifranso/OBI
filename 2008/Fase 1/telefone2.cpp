#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  string p;
  cin >> p;

  for(int i = 0; i < p.size(); i++) {
    if(p[i] == 'A' || p[i] == 'B' || p[i] == 'C') {
      p[i] = '2';
    }
    if(p[i] == 'D' || p[i] == 'E' || p[i] == 'F') {
      p[i] = '3';
    }
    if(p[i] == 'G' || p[i] == 'H' || p[i] == 'I') {
      p[i] = '4';
    }
    if(p[i] == 'J' || p[i] == 'K' ||p[i] == 'L') {
      p[i] = '5';
    }
    if(p[i] == 'M' || p[i] == 'N' || p[i] == 'O') {
      p[i] = '6';
    }
    if(p[i] == 'P' || p[i] == 'Q' || p[i] == 'R' || p[i] == 'S') {
      p[i] = '7';
    }
    if(p[i] == 'T' || p[i] == 'U' || p[i] == 'V') {
      p[i] = '8';
    }
    if(p[i] == 'W' || p[i] == 'X' || p[i] == 'Y' || p[i] == 'Z') {
      p[i] = '9';
    } 
  }
  
  cout << p << endl;
}
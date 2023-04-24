#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int n, min;
  int x, y;
  int ans = 0;
  scanf("%d %d", &n, &min);
  
  for(int i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);
    if(x+y >= min) ans++; 
  }

  printf("%d\n", ans);
}
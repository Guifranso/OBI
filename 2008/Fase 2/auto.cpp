#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int n;
  string a;
  int ans = 0;
  
  cin >> n >> a;

  for(int i = 0; i < n; i++) {
    if(a[i] == 'P' || a[i] == 'C') ans += 2;
    else if(a[i] == 'A') ans++;
  }

  cout << ans << endl;
}
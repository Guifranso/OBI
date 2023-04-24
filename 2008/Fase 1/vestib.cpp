#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int n;
  string a, b;
  int ans = 0;
  
  cin >> n >> a >> b;

  for(int i = 0; i < n; i++) {
    if(a[i] == b[i]) ans++;
  }

  cout << ans << endl;
}
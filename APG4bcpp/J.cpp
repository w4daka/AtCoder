#include <bits/stdc++.h>
using namespace std;

int main() {
  int x,a,b;
  cin >> x >>a >> b;
  x++;
  int ans2 = x * (a+b);
  int ans3 = ans2 * ans2;
  cout << x << endl;
  cout << ans2 << endl;
  cout << ans3 << endl;
  ans3 = ans3 -1;
  cout <<ans3 << endl;
}
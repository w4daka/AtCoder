#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  if(a == 1){
    int price,n;
    cin >> price >> n;
    cout << price*n << endl;
  }

  if(a == 2){
    string text;
    int price,n;
    cin >> text >> price >> n;
    cout << text << "!" << endl;
    cout << price * n << endl;
  }
}
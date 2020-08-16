#include <iostream>
#include <string>
using namespace std;

#define ll long long

int isEven(ll int a) {
  if(a%2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int T;
  ll int r, g, b, w;
  int ans = 0;
  int flag = 0;

  cin >> T;
  for(int i=0; i<T; ++i) {
    cin >> r >> g >> b >> w;
    ans = isEven(r) + isEven(g) + isEven(b) + isEven(w);
    if(ans == 0) {
      flag = 1;
    }
    if(ans == 1) {
      if(r == 0 || g == 0 || b == 0) {
        flag = 0;
      } else {
        flag = 1;
      }
    }
    if(ans == 2) {
      flag = 0;
    }
    if(ans == 3) {
      flag = 1;
    }
    if(ans == 4) {
      flag = 1;
    }
    if(flag == 0) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }

  return 0;
}

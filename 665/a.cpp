#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n,k; cin >> n >> k;

  if(n<=k) {
    cout << k-n << endl;
    return;
  }

  n%=2;
  k%=2;
  if(k) {
    if(n) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }
  } else {
    if(n) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }

  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while(T--) solve();

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  string s; cin >> s;
  int x; cin >> x;
  int n = int(s.size());

  string w(n,'1');
  for(int i=0; i<n; ++i) {
    if(s[i] == '0') {
      if(i-x >= 0) {
        w[i-x] = '0';
      }
      if(i+x < n) {
        w[i+x] = '0';
      }
    }
  }
  bool ok = true;
  for(int i=0; i<n; ++i) {
    if(s[i] == '1') {
      if(i-x >= 0 && w[i-x]=='1') continue;
      if(i+x < n && w[i+x]=='1') continue;
      ok = false;
    }
  }
  if(!ok) {
    cout << -1 << '\n';
  } else {
    cout << w << '\n';
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  cin >> T;
  while(T--) solve();

  return 0;
}

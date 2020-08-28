#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n; cin >> n;
  vector<ll> a(n); for(int i=0; i<n; ++i) cin >> a.at(i);
  ll op=0;
  for(int i=n-1; i>=1; --i) {
    if(a.at(i-1)>a.at(i)) {
      op+=a[i-1]-a[i];
    }
  }
  cout << op << endl;

  return;
}

signed main() {
  ll T;
  cin >> T;
  for(ll i=0; i<T; ++i) {
    solve();
  }
  return 0;
}

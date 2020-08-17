#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

int not_same(ll a, ll b) {
  if(a==b) return 0;
  return 1;
}

void solve() {
  int n; cin >> n;
  vector<ll> a(n);
  for(int i=0; i<n; ++i) cin >> a.at(i);

  cout << (*max_element(a.begin(),a.end()) == *min_element(a.begin(),a.end()) ? n:1) << endl;

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

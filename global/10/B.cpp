#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  ll n, k; cin >> n >> k;
  vector<ll> a(n); for(ll i=0; i<n; ++i) cin >> a[i];

  ll d = *max_element(a.begin(),a.end());
  for(ll i=0; i<n; ++i) a[i]=d-a[i];
  k%=2;
  if(!k) {
    d = *max_element(a.begin(),a.end());
    for(ll i=0; i<n; ++i) a[i]=d-a[i];
  }

  for(ll i=0; i<n; ++i) {
    if(i>0) cout << " ";
    cout << a[i];
  }

  cout << endl;
  return;
}

signed main() {
  ll T;
  cin >> T;
  while(T--) solve();
  return 0;
}

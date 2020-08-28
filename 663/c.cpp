#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  ll n; cin >> n;
  ll mod=1e9+7;

  ll p=1, ans=1;
  for(int i=2; i<=n; ++i) ans=(ans*i)%mod;
  for(int i=1; i<n; ++i) p=(p*2)%mod;
  cout << (ans-p+mod)%mod << '\n';

  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  //cin >> T;
  while(T--) solve();

  return 0;
}

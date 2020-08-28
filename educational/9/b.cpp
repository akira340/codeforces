#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<'\n';exit(0);}

void solve() {
  ll p, f; cin >> p >> f;
  ll cntS, cntW; cin >> cntS >> cntW;
  ll s, w; cin >> s >> w;

  if(s>w) {
    swap(s,w); swap(cntS, cntW);
  }

  ll ans=0;
  for(int pKeep=0; pKeep<=cntS; ++pKeep) {
    if(pKeep*s > p) continue;
    int fKeep = min(cntS-pKeep, f/s);
    int pLeft = p - pKeep*s;
    int fLeft = f - fKeep*s;
    int pAxe = min(pLeft/w, cntW);
    int fAxe = min(fLeft/w, cntW-pAxe);
    ans = max(ans, (ll)pKeep+fKeep+pAxe+fAxe);
  }
  cout << ans << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  cin >> T;
  while(T--) solve();

  return 0;
}

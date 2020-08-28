#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int a0,a1,a2;
  int b0,b1,b2;
  cin >> a0 >> a1 >> a2;
  cin >> b0 >> b1 >> b2;

  int ans=0;
  int tmp=min(a2,b1);
  ans+=tmp*2;
  a2-=tmp;
  b1-=tmp;

  tmp=min(a1,b0+b1);
  a1-=tmp;
  if(a1) ans-=a1*2;
  cout << ans << endl;

  return;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T=1;
  cin >> T;
  while(T--) solve();

  return 0;
}

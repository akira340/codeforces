#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n,m; cin >> n >> m;
  vector<string> belt(n);
  for(int i=0; i<n; ++i) cin >> belt.at(i);

  int ans=0;
  for(int i=0; i<n-1; ++i) {
    if(belt[i][m-1]!='D') ans++;
  }
  for(int i=0; i<m-1; ++i) {
    if(belt[n-1][i]!='R') ans++;
  }
  cout << ans << '\n';

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

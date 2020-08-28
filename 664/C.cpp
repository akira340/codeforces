#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n,m; cin >> n >> m;
  vector<int> a(n),b(m);
  for(int i=0; i<n; ++i) cin >> a.at(i);
  for(int i=0; i<m; ++i) cin >> b.at(i);

  vector<int> c(n);
  int ans=0;
  for(int i=0; i<n; ++i) {
    int min=512;
    for(int j=0; j<m; ++j) {
      int x=(a[i]&b[j]);
      cout << a[i] << " & " << b[j] << ": " << x << " " << (ans|x) << endl;
      if((ans|x)==ans || (ans|x)==x) {
        c.at(i)=x; break;
      }
      if(min>x) {
        //cout << a[i] << " & " << b[j];
        //cout << " = "<< (a[i]&b[j]) << endl;
        min=x;
      }
      c.at(i)=min;
    }
    ans|=c.at(i);
    cout << i << " ans " << ans << endl;
  }
  cout << ans << endl;

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

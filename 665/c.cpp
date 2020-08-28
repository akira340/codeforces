#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

void solve() {
  int n; cin >> n;
  vector<int> a(n),b(n);
  for(int i=0; i<n; ++i) cin >> a.at(i);
  if(n==1) {
    cout << "YES" << endl;
    return;
  }
  b=a;
  sort(b.begin(),b.end());
  int min = *min_element(a.begin(),a.end());
  for(int i=0; i<n; ++i) {
    if(a.at(i)%min!=0 && a.at(i)!=b.at(i)) {
      cout << "NO" << endl; return;
    }
  }
  cout << "YES" << endl;

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

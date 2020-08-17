#include <bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T> void drop(const T &x){cout<<x<<endl;exit(0);}

int check(string s) {
  int n=s.size();
  while(--n>0 && s[n]==s[0]);
  return n==0;
}

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  for(int i=0; i<n-1; ++i) {
    if(s[i]!=s[i+1]) {
      rotate(s.begin(), s.begin()+i+1, s.end());
      break;
    }
  }

  int ans=0;
  int t=0;
  for(int i=0; i<=n; ++i) {
    if(i==n || (i>0 && s[i]!=s[i-1])) {
      if(t==n) {
        ans += (t+2)/3;
      } else {
        ans += t/3;
      }
      t=1;
    } else {
      ++t;
    }
  }

  cout << ans << endl;
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


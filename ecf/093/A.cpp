#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; ++i) cin >> v[i];

  int a=v[0], b=v[1], c=v[n-1];
  if(a+b<=c) {
    cout << 1 << " " << 2 << " " << n << endl;
  } else {
    cout << -1 << endl;
    return;
  }

}

int main() {
  int t;
  cin >> t;
  for(int h=0; h<t; ++h) {
    solve();
  }

  return 0;
}


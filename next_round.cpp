#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int a[100];
  int n, m;
  cin >> n >> m;

  int ans = 0;
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    if(a[i]>=a[m-1] && a[i] > 0) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}

#include <iostream>
#include <string>
using namespace std;

#define ll long long

int main() {
  int n, m, sx, sy;
  cin >> n >> m >> sx >> sy;
  int a[n][m] = {};

  cout << sx << " " << sy << endl;
  a[sx-1][sy-1] = 1;
  cout << 1 << " " << sy << endl;
  a[0][sy-1] = 1;

  int x = 1, y = 1;
  for(int i=0; i<n; ++i) {
    for(int j=0; j<m; ++j) {
      if(a[x-1][y-1] != 1) {
        cout << x << " " << y << endl;
      }
      if(x%2 != 0 && y!=m) {
        ++y;
      }
      if(x%2 == 0 && y!=1) {
        --y;
      }
    }
    ++x;
  }

  return 0;
}

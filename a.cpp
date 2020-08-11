#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int p = m*n;
  if(p%2 != 0) {
    p--;
  }
  p /= 2;
  cout << p << endl;

  return 0;
}

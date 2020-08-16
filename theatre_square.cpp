#include <iostream>
#include <string>
using namespace std;

#define ll long long

int main() {
  ll int n, m, a;
  ll int n1, m1;
  cin >> n >> m >> a;
  ll int ans = 0;

  n1 = n/a;
  if(n%a != 0) {
    n1++;
  }
  m1 = m/a;
  if(m%a != 0) {
    m1++;
  }
  ans = n1*m1;
  cout << ans << endl;

  return 0;
}

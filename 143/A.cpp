#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n;
  int a=0, b=0, c=0;
  int ans=0;

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> a >> b >> c;
    if(a+b+c >= 2) {
      ans++;
    }
  }
  
  cout << ans;

  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

void solve() {
  string s; cin >> s;
  int ans=0;
  bool turn=true;

  while(s.size()>0) {
    if(s[0]=='0') {
      bool flag=true;
      for(int i=0; i<s.size(); ++i) {
        if(s[i]=='1') {
          flag = false;
          break;
        }
      }
      if(flag) {
        s.erase(s.begin(),s.end());
        break;
      }
    }
    int count=0;
    int index=0;
    for(int i=0; i<s.size(); ++i) {
      if(s[i]=='0') continue;
      int ccount=1;
      for(int j=i+1; j<s.size(); ++j) {
        if(s[j]!='1') break;
        ++ccount;
      }
      if(ccount>count) {
        count = ccount;
        index = i;
      }
    }
    s.erase(s.begin()+index,s.begin()+index+count);
    if(turn) {
      ans+=count;
      turn=false;
    } else {
      turn=true;
    }
  }
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  for(int h=0; h<t; ++h) {
    solve();
  }
  return 0;
}


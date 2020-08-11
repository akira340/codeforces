#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> str;
  string input;
  for(int i=0; i<n; i++) {
    cin >> input;
    str.push_back(input);
  }

  for(int i=0; i<n; i++) {
    if(str[i].size() > 10) {
      cout << str[i][0] << str[i].size()-2 << str[i][str[i].size()-1] << endl;
    } else {
      cout << str[i] << endl;
    }
  }

  return 0;
}

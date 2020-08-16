#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "01111001";
  s.erase(s.begin()+1, s.begin()+5);
  cout << s << endl;

  return 0;
}

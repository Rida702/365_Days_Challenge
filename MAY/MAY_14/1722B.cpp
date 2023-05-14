#include <bits\stdc++.h>
using namespace std;
 
int main(){
  int test;
  cin >> test;
  while (test--)
  {
    int column;
    cin >> column;
    string s1, s2;
    cin >> s1 >> s2;
    replace(s1.begin(), s1.end(), 'B', 'G');
    replace(s2.begin(), s2.end(), 'B', 'G');
    cout << (s1 == s2 ? "YES" : "NO") << endl;
  }
}

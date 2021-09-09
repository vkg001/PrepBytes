#include <bits/stdc++.h>
using namespace std;


void Solve(int ct1, int ct0, int &n, string &s) {
  if(ct1 + ct0 == n) {
    for(int i=0;  i<n;  i++) {
      if(s[i] == '0')   cout << 1;
      else    cout << 0;
    }
    cout << " ";
    return;
  }
  
  if(ct1 == ct0) {
    s.push_back('1');
    Solve(ct1+1, ct0, n, s);
    s.pop_back();
    return;
  }
  
  if(ct1 < ct0) {
    return;
  }
  
  
  if(ct1 < n/2) {
    s.push_back('1');
    Solve(ct1+1, ct0, n, s);
    s.pop_back();
  }
  
  s.push_back('0');
  Solve(ct1, ct0+1, n, s);
  s.pop_back();
}


int main()
{
  //write your code here
  int n;
  string s;
  cin >> n;
  n *= 2;
  Solve(0, 0, n, s);
  return 0;
}

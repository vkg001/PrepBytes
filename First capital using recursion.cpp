#include <bits/stdc++.h>
using namespace std;


int Solve(string &s, int idx)
{
  if(idx >= s.size())
    return -1;
    
  if(isupper(s[idx]))
    return idx;
    
  return Solve(s, idx+1);
}


int main()
{
  //write your code here
  int t;
  cin >> t;
  while(t--)
  {
    string s;
    cin >> s;
    cout << Solve(s, 0) << endl ;
  }
  return 0;
}

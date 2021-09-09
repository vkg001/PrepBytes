#include <bits/stdc++.h>
using namespace std;


void Solve(vector<char> &str, int idx) {
  if(idx >= str.size())
    return;
    
  Solve(str, idx+1);
  cout << str[idx] << " ";
}


int main()
{
  //write your code here
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<char> str;
    char c;
    for(int i=0; i<n;  i++) {
      cin >> c;
      str.push_back(c);
    }
    Solve(str, 0);
    cout << endl;
  }
  return 0;
}

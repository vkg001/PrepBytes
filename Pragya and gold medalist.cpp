#include <bits/stdc++.h>
using namespace std;

int ans;

//const int N = 27;
//int dp[N][N];

void Solve(string &s1, string &s2, int i, int j) {
  if(i >= s1.size()  &&  j >= s2.size()) {
    ans++;
    return;
  } 
  // if(dp[i][j] == 1)
  //   return;
  // dp[i][j] = 1;
  
  if(i < s1.size())
    Solve(s1, s2, i+1, j);
  if(j < s2.size())
    Solve(s1, s2, i, j+1);
}



int main()
{
  int t;
  cin >> t;
  while(t--) {
    string s1, s2;
    cin >> s1 >> s2 ;
    ans = 0;
    Solve(s1, s2, 0, 0);
    cout << ans << endl;
  }
  return 0;
}

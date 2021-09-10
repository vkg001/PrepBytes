#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MOD = 1e9+7;

LL Solve(LL n) {
  if(n == 0) {
    return 1;
  }
  
  return (Solve(n/10) * (n%10)) % MOD;
}



int main()
{
  //write your code here
  int t;
  cin >> t;
  while(t--) {
    LL n;
    cin >> n;
    cout << Solve(n) << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum;
const ll mod = 1e9 + 7;

void Solve(ll n) {
  if(n == 1) {
    sum = (sum+1)%mod;
    return;
  }
  
  if(n&1) {
    sum += n;
    sum %= mod;
    Solve(3*n+1);
  } else {
    sum += n;
    sum %= mod;
    Solve(n/2);
  }
}




int main()
{
  //write your code here
  int t;
  cin >> t;
  while(t--) {
    ll n;
    cin >> n;
    sum = 0;
    Solve(n);
    cout << sum << endl;
  }
  return 0;
}

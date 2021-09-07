#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, x;
    priority_queue<int, vector<int>> prq;
    cin >> n;
    while(n--)
    {
      cin >> x;
      prq.push(x);
    }
    while(!prq.empty())
    {
      cout << prq.top() << " " ;
      prq.pop();
    }
    cout << endl;
  }
  
  return 0;
}

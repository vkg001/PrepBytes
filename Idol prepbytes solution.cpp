#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, i, j, ans = 0, x;
    cin >> n;
    int arr[n], leftmax[n-1];
    stack<int> rightmax;
    cin >> arr[0];
    x = arr[0];
    for(i=1;  i<n;  i++)
    {
      cin >> arr[i];
      x = max(x, arr[i-1]);
      leftmax[i-1] = x;
    }
    x = arr[n-1];
    for(i = n-2, j = 0;  i > 0;  i--, j++)
    {
      x = max(x, arr[i+1]);
      rightmax.push(x);
    }
    
    
    // for(i=0;  i<n-1;  i++)
    //   cout << leftmax[i] << " " ;
    // cout << endl;
    
    // for(i=0;  i<n-1;  i++)
    //   cout << rightmax[i] << " " ;
    // cout << endl;
    
    // cout << " /////////////// \n" ;
    
    ans = i = 0;
    while(!rightmax.empty())
    {
      x = min(rightmax.top(), leftmax[i]);
      if(x > arr[i+1])
      {
        ans += (x - arr[i+1]);
      }
      rightmax.pop();
      i++;
    }
    cout << ans << endl;
  }
  return 0;
}

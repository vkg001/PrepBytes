#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    
    int n, x, i, j, ans, len, bre;
    vector<int> arr;
    cin >> n;
    ans = 0;
    for(i=0;  i<n;  i++)
    {
      cin >> x;
      arr.push_back(x);
    }
    i = 0;
    while(i < n)
    {
      j = i-1;
      bre = 1;
      len = arr[i];
      while(j >= 0  &&  arr[i] <= arr[j])
      {
        j--;
        bre++;
      }
      j = i+1;
      while(j < n  &&  arr[i] <= arr[j])
      {
        j++;
        bre++;
      }
      ans = max(ans,  (len*bre));
      i++;
    }
    cout << ans << endl;
  }
  return 0;
}

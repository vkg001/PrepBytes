#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, x;
  cin >> t;
  while(t--)
  {
    int n, i, j;
    vector<int> arr, ans;
    cin >> n;
    for(i=0;  i<n;  i++)
    {
      cin >> x;
      arr.push_back(x);
    }
    i = 0;
    while(i < n-1)
    {
      j = i+1;
      while(j < n  &&  arr[i] >= arr[j])
      {
        j++;
      }
      if(j == n)
      {
        ans.push_back(0);
      }
      else
      {
        ans.push_back(arr[j]);
      }
      i++;
    }
    for(auto v: ans)
      cout << v << " ";
    cout << "0" << endl;
  }
  return 0;
}

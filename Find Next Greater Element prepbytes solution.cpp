#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, i, j;
    cin >> n;
    int arr[n], ans[n];
    for(i=0;  i<n;  i++)
    {
      cin >> arr[i];
    }
    
    for(i=0;  i<n;  i++)
    {
      j = i+1;
      while(true)
      {
        if(j >= n)
        {
          j = 0;
        }
        if(i == j)
        {
          ans[j] = -1;
          break;
        }
        if(arr[i] < arr[j])
        {
          ans[i] = arr[j];
          break;
        }
        j++;
      }
    }
    for(i=0;  i<n;  i++)
    {
      cout << ans[i] << " " ;
    }
    cout << endl;
  }
  return 0;
}

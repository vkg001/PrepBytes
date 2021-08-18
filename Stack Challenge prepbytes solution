#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int a, b, mxsum, i, j, prev = 0, k;
    cin >> a >> b >> mxsum ;
    vector<int> arr1, arr2;
    for(i=0;  i<a;  i++)
    {
      cin >> j;
      arr1.push_back(j+prev);
      prev = arr1[i];
    }
    prev = 0;
    for(i=0;  i<b;  i++)
    {
      cin >> j;
      arr2.push_back(j+prev);
      prev = arr2[i];
    }
    a = arr1.size()-1;
    while(a >= 0  &&  arr1[a] > mxsum)
      a--;
    
    b = arr2.size()-1;
    while(b >= 0  &&  arr2[b] > mxsum)
      b--;
    
    k = b+1;
    while(a >= 0)
    {
      i = a+1;
      j = mxsum-arr1[a];
      prev = 0;
      while(prev <= b  &&  arr2[prev] <= j)
      {
        prev++;
        i++;
      }
      a--;
      k = max(k, i);
    }
    cout << k << endl;
  }
  return 0;
}

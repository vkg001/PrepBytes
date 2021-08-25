#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, i;
  deque<int> dq;
  cin >> n >> k;
  int arr[n];
  for(i=0;  i<n;  i++)
  {
    cin >> arr[i];
  }
  
  
  for(i=0;  i<k;  i++)
  {
    while(!dq.empty()  &&  dq.front() < arr[i])
    {
      dq.pop_front();
    }
    while(!dq.empty()  &&  dq.back() < arr[i])
    {
      dq.pop_back();
    }
    dq.push_back(arr[i]);
  }
  while(i < n)
  {
    cout << dq.front() << " " ;
    while(!dq.empty()  &&  dq.front() < arr[i])
    {
      dq.pop_front();
    }
    while(!dq.empty()  &&  dq.back() < arr[i])
    {
      dq.pop_back();
    }
    if(!dq.empty()  &&  arr[i-k] == dq.front())
    {
      dq.pop_front();
    }
    dq.push_back(arr[i]);
    i++;
  }
  cout << dq.front() << endl;
  return 0;
}

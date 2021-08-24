#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  stack<int> org, helper;
  bool flag = true;
  while(flag)
  {
    cin >> a;
    switch(a)
    {
      case (-1):
      if(org.top() == helper.top())
        helper.pop();
      org.pop();
      break;
      
      case (-2):
      cout << helper.top() << endl;
      break;
      
      case (-3):
      flag = false;
      break;
      
      default:
      org.push(a);
      if(helper.empty()  ||  a >= helper.top())
        helper.push(a);
    }
  }
  return 0;
}

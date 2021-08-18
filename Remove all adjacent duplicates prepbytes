#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t, i, j;
  cin >> t;
  while(t--){
    
    string str;
    cin >> str;
    stack<char> stk;
    stk.push(str[0]);
    i = 1;
    while(i < str.size())
    {
      if(!stk.empty()  &&  stk.top() == str[i])
      {
        stk.pop();
      }else{
        stk.push(str[i]);
      }
      i++;
    }
    stack<char> ans;
    while(!stk.empty())
    {
      ans.push(stk.top());
      stk.pop();
    }
    while(!ans.empty())
    {
      cout << ans.top() ;
      ans.pop();
    }
    cout << endl;
  }
  return 0;
}

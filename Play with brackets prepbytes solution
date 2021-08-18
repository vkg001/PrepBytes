#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  int i = 1, f = 1;
  
  cin >> t;
  
  while(t--)
  {
    stack<char> stk;
    string s;
    
    i = f = 1;
    cin >> s;
    if(s.size()%2 == 1)
    {
      cout << "Not Valid" << endl;
      continue;
    }
    stk.push(s[0]);
    
    while(i < s.size())
    {
      switch(s[i])
      {
        case '}' : if(stk.empty()  ||  stk.top()!= '{')
                    {
                      f = 0;
                    }
                    if(!stk.empty()) stk.pop();
                    break;
                    
        case ')' : if(stk.empty()  ||  stk.top()!= '(')
                    {
                      f = 0;
                    }
                    if(!stk.empty()) stk.pop();
                    break;
                    
        case ']' : if(stk.empty()  ||  stk.top()!= '[')
                    {
                      f = 0;
                    }
                    if(!stk.empty()) stk.pop();
                    break;
                    
        default : stk.push(s[i]); 
                  break;
      }
      if( f== 0)
        break;
      i++;
    }
    if(f == 1  &&  stk.empty()){
      cout << "Valid" << endl;
    }else{
    cout << "Not Valid" << endl;
    }
  }
  return 0;
}

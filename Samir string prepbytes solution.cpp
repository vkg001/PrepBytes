#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string s, ans;
    int i, digit = 1;
    stack<char> help;
    stack<int> help2;
    
    cin >> s;
    for(i=0;  i<=s.size();  i++)
    {
      if(i == s.size()  ||  s[i] == 'I')
      {
        help2.push(digit++);
        while(!help.empty())
        {
          help2.push(digit++);
          help.pop();
        }
        while(!help2.empty())
        {
          ans.push_back('0' + help2.top());
          help2.pop();
        }
      }
      if(i < s.size()  &&  s[i] == 'D')
        help.push(s[i]);
    }
    cout << ans << endl;
  }
  return 0;
}

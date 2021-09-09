#include <bits/stdc++.h>
using namespace std;

priority_queue<string, vector<string>, greater<string>> prq;

void Solve(char &b, char &c, int &k, string &s) {
  if(s.size() == k) {
    prq.push(s);
    return;
  }
  
  if(s.empty()) {
    
    s.push_back(b);
    Solve(b, c, k, s);
    
    s.pop_back();
    
    s.push_back(c);
    Solve(b, c, k, s);
    
    s.pop_back();
    
    return;
  }
  
  auto LE = s.end();
  LE--;
  if(*LE == c) {
    s.push_back(b);
    Solve(b, c, k, s);
    s.pop_back();
    return;
  }
  
  s.push_back(b);
  Solve(b, c, k, s);
    
  s.pop_back();
    
  s.push_back(c);
  Solve(b, c, k, s);
    
  s.pop_back();
}



int main()
{
  //write your code here
  int t;
  cin >> t;
  while(t--) {
    char b, c;
    int k;
    string s;
    
    cin >> b >> c >> k;
    Solve(b, c, k, s);
    
    while(!prq.empty()) {
        cout << prq.top() << endl ;
        prq.pop();
    }
  }
  return 0;
}

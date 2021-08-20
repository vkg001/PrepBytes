#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> Stk;
  multiset<int> mn;
  int q, ch, x;
  cin >> q;
  while(q--){
    cin >> ch;
    switch(ch){
      case 1: cin >> x;
              Stk.push(x);
              mn.insert(x);
              break;
      case 2: if(Stk.empty()) cout << "-1" << endl;
              else{
              auto it = mn.find(Stk.top());
              mn.erase(it);
              Stk.pop();
              }
              break;
      case 3: if(Stk.empty()) cout << "-1" << endl;
              else cout << Stk.top() << endl;
              break;
      case 4: if(Stk.empty()) cout << "-1" << endl;
              else cout << *mn.begin() << endl;
              break;
    }
  }
  return 0;
}

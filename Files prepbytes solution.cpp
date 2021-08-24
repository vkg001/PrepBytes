#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int queries;
    stack<int> question, minElements;
    cin >> queries;
    while(queries--)
    {
      int choice, x;
      cin >> choice;
      switch(choice)
      {
        case 1:
          cin >> x;
          question.push(x);
          if(minElements.size() == 0   ||   x <= minElements.top())
            minElements.push(x);
          break;
        
        case 2: 
          if(question.size() == 0)
          {
            cout << "-1" << endl;
          }
          else{
          cout << question.top() << endl;
          if(question.top() == minElements.top())
            minElements.pop();
          question.pop();
          }
          break;
          
        case 3:
          if(question.size() > 0)
            cout << question.top() << endl;
          else
            cout << "-1" << endl;
          break;
          
        case 4: 
          if(!minElements.empty())
            cout << minElements.top() << endl;
          else
            cout << "-1" << endl;
          break;
      }
    }
  }
  return 0;
}

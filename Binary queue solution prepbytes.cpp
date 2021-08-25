

// THIS SOLUTION IS EASY TO UNDERSTAND BUT ONLY VALID FOR NUMBERS UPTO 1e5
// WITH TESTCASES UPTO 100


//  YOU CAN USE PRECOMPUTE TECHNIQUE IF CONSTRAINTS ARE VERY TIGHT
// LIKE IF YOU HAVE TO CHECK FOR MORE THAN 1e3 TESTCASES AND NUMBER VARIES
// UPTO 1e6



#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  	while(t--){
  	  int a, b;
  	cin >> a;
  	for(b=1;  b<=a;  b++)
  	{
    	int x = b;
		stack<int> stk;
    	while(x)
    	{
			stk.push(x%2);
			x/=2;
    	}
		while(!stk.empty())
		{
			cout << stk.top();
			stk.pop();
		}
		cout << " " ;
  	}
  	cout << endl; 
  	}
  	return 0;
}

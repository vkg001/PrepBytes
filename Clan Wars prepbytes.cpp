#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int ver, edg, a, b, i, j;
    map<int, int> color;
    map<int, list<int>> arr;
    map<int, bool> isVisited;
    queue<pair<int, int>> q;
    
    cin >> ver >> edg ;
    
    for(i=0;  i<edg;  i++)
    {
      cin >> a >> b;
      arr[a].push_back(b);
      arr[b].push_back(a);
    }
    color[0] = 1;
    //isVisited[0] = true;
    q.push({0, 1});
    bool flag = false;
    while(!q.empty())
    {
      pair<int, int> temp;
      temp = q.front();
      isVisited[temp.first] = true;
      q.pop();
      int clr ;
      if(temp.second == 1)
        clr = 2;
      if(temp.second == 2)
        clr = 1;
      for(auto v: arr[temp.first])
      {
        if(color[v] == temp.second)
        {
          cout << "No" << endl;
          flag = true;
          break;
        }
        else
        {
          color[v] = clr;
          if(!isVisited[v])   q.push({v, clr});
        }
      }
      if(flag)  break;
    }
    if(!flag)
        cout << "Yes" << endl;
  }
  return 0;
}

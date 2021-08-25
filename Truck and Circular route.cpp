#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, i, start, curr_fuel, truck;
  map<int, bool> isVisited;
  
  cin >> n;
  int fuel[n], distance[n];
  
  for(i=0;  i<n;  i++)
  {
    cin >> fuel[i];
  }
  for(i=0;  i<n;  i++)
  {
    cin >> distance[i];
  }
  
  i = 0;
  while(fuel[i] < distance[i])
    i++;
  
  start = truck = i;
  isVisited[i] = true;
  curr_fuel = 0;
  i++;
  while(i != start)
  {
    if(curr_fuel + fuel[truck] < distance[truck])
    {
      //cout << " < cf " << curr_fuel << " | ft " << fuel[truck] << " | " << distance[truck] << endl;  
      if(isVisited[i])
      {
        cout << "-1" << endl;
        return 0;
      }
      isVisited[i] = true;
      start = truck = i;
      curr_fuel = 0;
      i++;
    }
    else
    {
      curr_fuel += fuel[truck];
      curr_fuel -= distance[truck];
      truck++;
      i++;
    }
    if(i == n)
    {
      i = 0;
    }
    if(truck == n)
    {
      truck = 0;
    }
  }
  cout << start << endl ;
  return 0;
}

#include<bits/stdc++.h>

using namespace std;

const int N = 1e4;

void Solve(int i, int j, int &row, int &col, int (*arr)[N], map<pair<int, int>, bool> &isVisited)
{
  if(i < 0  ||  j < 0  ||  i >= row  ||  j >= col ||  arr[i][j] == 0  ||  isVisited[{i, j}] == 1)
    return;
  isVisited[{i, j}] = true;
  
  // For East, West, North, South
  Solve(i+1, j, row, col, arr, isVisited);
  Solve(i-1, j, row, col, arr, isVisited);
  Solve(i, j+1, row, col, arr, isVisited);
  Solve(i, j-1, row, col, arr, isVisited);
  
  
  // For Diagonals
  Solve(i+1, j+1, row, col, arr, isVisited);
  Solve(i-1, j+1, row, col, arr, isVisited);
  Solve(i-1, j-1, row, col, arr, isVisited);
  Solve(i+1, j-1, row, col, arr, isVisited);
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int row, col, i, j, arr[N][N], ans = 0;
    map<pair<int, int>, bool> isVisited;
    cin >> row >> col;
    for(i=0;  i<row;  i++)
    {
      for(j=0;  j<col;  j++)
      {
        cin >> arr[i][j];
      }
    }
    ans = 0;
    for(i=0;  i<row;  i++)
    {
      for(j=0;  j<col;  j++)
      {
        if(isVisited[{i, j}] == false  &&  arr[i][j] == 1)
        {
          //cout << i << " | " << j << endl;
          ans++;
          Solve(i, j, row, col, arr, isVisited);
        }
      }
    }
    cout << ans << endl;
  }
}

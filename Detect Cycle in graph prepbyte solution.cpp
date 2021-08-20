#include<bits/stdc++.h>

using namespace std;

//const int N = 1e4;
int n;
int itr;
map<int, list<int>> adjmat;
map<int, bool> isVisited;
queue<int> q;

bool Solve(int src)
{
    while(!q.empty())
    {
        //cout << itr++ << endl;
        int n = q.front();
        if(isVisited[n] == true)
        {
            cout << "Yes" << endl;
            return true;
        }
        isVisited[n] = true;
        q.pop();
        for(auto v: adjmat[n])
        {
            if(isVisited[v] == false)
            {
                q.push(v);
            }
        }
    }
    return false;
}

int main()
{
    int links, a, b, i, j;
    cin >> n >> links;
    for(i=0;  i<links;  i++)
    {
        cin >> a >> b;
        adjmat[a].push_back(b);
        adjmat[b].push_back(a);
        //AdjMat[a][b] = AdjMat[b][a] = 1;
    }
    for(i=0;  i<n;  i++)
    {
        if(isVisited[i] == false)
        {
            q.push(i);
            if(Solve(i))
                return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

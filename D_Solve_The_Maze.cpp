#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <numeric>
#include <limits>
#include <cstring>
#include <cassert>
#include <list>
#include <tuple>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mat(n, vector<char>(m));
    int gcount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'G')
                gcount++;
        }
    }
    for (int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='B'){
                if(i>0){
                    if(mat[i-1][j]=='G'){
                        cout<<"No"<<endl;
                        return;
                    }
                    else if(mat[i-1][j]=='.'){
                        mat[i - 1][j] = '#';
                    }
                }
                if(i+1<n){
                    if(mat[i+1][j]=='G'){
                        cout << "No" << endl;
                        return;
                    }
                    else if(mat[i+1][j]=='.'){
                        mat[i + 1][j] = '#';
                    }
                }
                if(j>0){
                    if(mat[i][j-1]=='G'){
                        cout << "No" << endl;
                        return;
                    }
                    else if(mat[i][j-1]=='.'){
                        mat[i][j - 1] = '#';
                    }
                }
                if(j+1<m){
                    if(mat[i][j+1]=='G'){
                        cout << "No" << endl;
                        return;
                    }
                    else if(mat[i][j+1]=='.'){
                        mat[i][j + 1] = '#';
                    }
                }
            }
        }
    }
    if(mat[n-1][m-1]=='B'){
        cout<<"No"<<endl;
        return;
    }
    vector<vector<int>> isReachable(n, vector<int>(m, -1));

    isReachable[n - 1][m - 1] = (mat[n - 1][m - 1] == '#' ? -1 : 1);
    if(mat[n - 1][m - 1] == '#' && gcount>0)
    {
        cout << "No" << endl;
        return;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    
    
    queue<pii> q;
    q.push({n - 1, m - 1});
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x > 0)
        {
            if (isReachable[x - 1][y] == -1 && mat[x - 1][y] != '#')
            {
                isReachable[x - 1][y] = 1;
                q.push({x - 1, y});
            }
        }
        if (x + 1 < n)
        {
            if (isReachable[x + 1][y] == -1 && mat[x + 1][y] != '#')
            {
                isReachable[x + 1][y] = 1;
                q.push({x + 1, y});
            }
        }
        if (y > 0)
        {
            if (isReachable[x][y - 1] == -1 && mat[x][y - 1] != '#')
            {
                isReachable[x][y - 1] = 1;
                q.push({x, y - 1});
            }
        }
        if (y + 1 < m)
        {
            if (isReachable[x][y + 1] == -1 && mat[x][y + 1] != '#')
            {
                isReachable[x][y + 1] = 1;
                q.push({x, y + 1});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 'G' && isReachable[i][j] == -1)
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;  

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
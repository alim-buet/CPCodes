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
    vector<string> matrix;
    string line;
    while (cin.peek() == '\n')
        cin.get();

    getline(cin, line);
    int m = line.size();
    matrix.push_back(line);

    for (int i = 1; i < m; ++i)
    {
        getline(cin, line);
        matrix.push_back(line);
    }
    const int inf = 1e7;
    vector<vi> dist(m, vi(m, inf));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 'Y')
                dist[i][j] = 1;
        }
    }
    for (int i = 0; i < m; i++)
        dist[i][i] = 0;
   
    for (int k = 0; k < m; k++)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << dist[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int maxPossibleFriend = -1;
    int node = 0;
    for (int i = 0; i < m; i++)
    {
        int poss = 0;
        for (int j = 0; j < m; j++)
        {
            if (dist[i][j] == 2)
                poss++;
        }
        if (poss > maxPossibleFriend)
        {
            maxPossibleFriend = poss;
            node = i;
        }
    }
    cout << node << " " << maxPossibleFriend << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>

int firstDifferencePosition(const string &s1, const string &s2)
{
    int minLength = min(s1.length(), s2.length());

    for (int i = 0; i < minLength; ++i)
    {
        if (s1[i] != s2[i])
        {
            return i;
        }
    }

    if (s1.length() != s2.length())
    {
        return minLength;
    }

    return -1;
}

vector<int> topologicalSort(int n, vector<vector<int>> &adj)
{
    vector<int> indegree(n, 0);
    vector<int> result;

    for (int u = 0; u < n; ++u)
    {
        for (int v : adj[u])
        {
            indegree[v]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        result.push_back(u);

        for (int v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    if (result.size() != n)
    {
        // cycle
        return {-1};
    }

    return result;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];

    vector<vector<int>> graph(26); 
    int flag = 1;
    for (int i = 1; i < n; i++)
    {
        int ind = firstDifferencePosition(words[i - 1], words[i]);
        if (ind != -1)
        {
            if (ind >= words[i - 1].size())
            {
                continue;
            }
            else if (ind >= words[i].size())
            {
                flag = 0;
                break;
            }
            else
            {
                graph[words[i - 1][ind] - 'a'].push_back(words[i][ind] - 'a');
            }
        }
    }

    if (flag == 0)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        vector<int> ans = topologicalSort(26, graph);
        if (ans.size() == 1 && ans[0] == -1)
        {
            cout << "Impossible" << endl;
        }
        else
        {
           
            for (int i = 0; i < 26; i++)
            {
                cout << (char)(ans[i] + 'a');
            }
            cout << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>

int convertToInt(string num)
{
    int ans = 0;
    for (char c : num)
    {
        ans = ans * 26 + (c - 'A' + 1);
    }
    return ans;
}

string convertToString(string s)
{
    int colm = stoi(s);
    string ans;
    while (colm)
    {
        colm--; 
        int mod = colm % 26;
        ans += (char)(mod + 'A');
        colm /= 26;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int rPos = -1, cPos = -1, firstDigit = -1;
    int type = 1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R' && rPos == -1)
            rPos = i;
        else if (s[i] == 'C' && cPos == -1)
            cPos = i;
        else if (isdigit(s[i]) && firstDigit == -1)
            firstDigit = i;
    }

    // Check if format is R23C55
    if (rPos == 0 && cPos != -1 && firstDigit < cPos)
        type = 2;

    if (type == 1)
    {
        string colm, row;
        for (char ch : s)
        {
            if (isalpha(ch))
                colm += ch;
            else
                row += ch;
        }
        int cl = convertToInt(colm);
        cout << "R" << row << "C" << cl << '\n';
    }
    else
    {
        string ro, clm;
        int i = 1;
        while (i < n && s[i] != 'C')
            ro += s[i++];
        i++; 
        while (i < n)
            clm += s[i++];
        cout << convertToString(clm) << ro << '\n';
    }
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

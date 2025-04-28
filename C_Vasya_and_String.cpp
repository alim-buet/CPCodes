#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
int maxLength(string &s, int k, char ch)
{
    int n = s.size();
    int l = 0, r = 0;
    int max_len = 0;
    int changes = 0;

    while (r < n)
    {
        if (s[r] != ch)
        {
            changes++;
        }

        while (changes > k)
        {
            if (s[l] != ch)
            {
                changes--;
            }
            l++;
        }

        max_len = max(max_len, r - l + 1);
        r++;
    }

    return max_len;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = max(maxLength(s, k, 'a'), maxLength(s, k, 'b'));

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    fast();
    int n, m, k;
    cin >> n >> m >> k;
    int players[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cin >> players[i];
    }
    int ct = 0;
    for (int i = 0; i < m; i++)
    {
        int rem = (players[i] ^ players[m]);
        int currentcount = __builtin_popcount(rem);
        if (currentcount <= k) {
            ct++;
        }
    }
    cout << ct << endl;


    return 0;
}
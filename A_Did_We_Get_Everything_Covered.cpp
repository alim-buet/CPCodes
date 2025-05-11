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
    int n, k, m;
    cin >> n >> k >> m;
    string s;cin>>s;
    vector<vector<int>> charCount(k, vector<int>(m,0));
    for (int i = 0; i < m;i++){
        charCount[s[i] - 'a'][i]++;
    }
    for (int i = 0; i < k;i++){
        for (int j = 1; j < m;j++){
            charCount[i][j] += charCount[i][j - 1];
        }
    }
    int flag = 1;
    for (int i = 0; i < m;i++){
        int ch = s[i] - 'a';
        int chLeftCount = charCount[ch][i];
        int rightNeed = n- chLeftCount;
        for (int j = 0; j < k;j++){
            int rightCh = (charCount[j][m - 1] - charCount[j][i] - (s[i] - 'a' == j));
            if(rightCh<rightNeed){
                no for (int l = 0; l < chLeftCount;l++){
                    cout << s[i];
                }
                for (int r = 0; r < rightNeed;r++){
                    cout << (char)('a' + j);
                }
                cout << endl;
                return;
            }
        }
    }
    yes
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
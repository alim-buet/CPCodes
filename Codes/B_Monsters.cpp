#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else return a.second > b.second;

}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k;

        vector<pair<int, int>> healthsmod(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % k == 0) cout << i + 1 << " ";
            else {
                healthsmod[i].first = i + 1;
                healthsmod[i].second = x % k;
            }

        }
        sort(healthsmod.begin(), healthsmod.end(), cmp);
        for (auto& it : healthsmod) {
            if (it.first) {
                cout << it.first << " ";

            }

        }
        printf("\n");



    }

    return 0;
}
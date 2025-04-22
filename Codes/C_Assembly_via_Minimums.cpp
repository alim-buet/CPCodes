#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int an = n * (n - 1) / 2;
        vi arr(an);
        set<int> arrset;
        int maxel = INT_MIN;
        unordered_map<int, int> freq;
        for (int i = 0; i < an; i++) {
            cin >> arr[i];
            maxel = max(maxel, arr[i]);
            freq[arr[i]]++;
            arrset.insert(arr[i]);
        }
        vi greatercnt(n);
        for (int i = 0; i < n; i++) greatercnt[i] = (n - i - 1);
        int pos = 0;
        vi ans; 
        auto it = arrset.begin();
        for (int i = 0; i < n; i++) {
            int el = *it;
            int cnt = freq[el];
            int initialpos = pos;
            if (el == maxel) {
                for (int i = pos; i < n; i++) {
                    ans.push_back(el);
                }
                break;
            }
            int tempcnt = 0;
            while (tempcnt != cnt) {
                tempcnt += greatercnt[pos++];
            }
            for (int i = 0; i < (pos - initialpos); i++) {
                ans.push_back(el);
            }
            ++it; 
        }
        for (auto ele : ans) cout << ele << " ";
        cout << endl;
    }
    return 0;
}

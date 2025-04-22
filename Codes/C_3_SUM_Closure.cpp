#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void solve() {
    int n;cin >> n;
    int pos_cnt = 0, neg_cnt = 0, zero_cnt = 0;
    vi arr(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        if (arr[i] > 0) pos_cnt++;
        else if (arr[i] < 0) neg_cnt++;
        else zero_cnt++;
    }
    if (pos_cnt > 2 or neg_cnt > 2) {
        no

    }
    else {
        int size = pos_cnt + neg_cnt + min(3, zero_cnt);
        vi newarr(size);
        int zero = 0;
        int ind = 0;
        map<int, int> mp;
        for (int i = 0;i < n;i++) {
            if (arr[i] == 0) {
                if (zero < 3) {
                    newarr[ind] = 0;
                    zero++;
                    ind++;
                    mp[0]++;

                }
            }
            else {
                newarr[ind] = arr[i];
                mp[arr[i]]++;
                ind++;
            }

        }
        int isValid = true;
        for (int i = 0;i < size;i++) {
            if (!isValid) break;
            for (int j = 0;j < size;j++) {
                if (!isValid) break;
                for (int k = 0;k < size;k++) {
                    if (i != j && j != k && i != k) {
                        if (mp[newarr[i] + newarr[j] + newarr[k]] == 0) {
                            isValid = false;
                            break;

                        }
                    }
                }
            }
        }
        if (isValid) yes
        else no


    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
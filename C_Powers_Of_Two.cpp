#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, k;cin >> n >> k;
    int oneCount = __builtin_popcount(n);
    if (oneCount > k) { no }
    else {
        deque<int> q;
        int sum = 0;
        for (int i = 0;i < 32;i++) {
            if ((n) & (1 << i)) {
                q.push_front((1 << i));
            }
        }


        if (n < k) { no }
        else {
            while (q.size() != k) {
                int fr = q.front();
                q.pop_front();
                int a = fr / 2;
                if (a == 1) {
                    q.push_back(1);
                    q.push_back(1);

                }
                else {
                    q.push_front(a);
                    q.push_front(a);

                }
            }
            yes
                sort(q.begin(), q.end());
            for (auto el : q) {
                cout << el << " ";
            }
            cout << endl;
        }


    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
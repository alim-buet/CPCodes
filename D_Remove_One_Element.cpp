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
    vi arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    int lifeline = 1;
    stack<int> st;
    int A = 5;
    
    st.push(arr[0]);
    int maxsize = 1;
    for (int i = 1;i < n;i++) {
        int fr = st.top();
        if (arr[i] > fr) {
            st.push(arr[i]);
            maxsize = max(maxsize, (int) st.size());

        }
        else {
            if (lifeline) {
                st.pop();
                int fr2 = st.top();
                if (fr2 < arr[i]) {
                    st.push(arr[i]);
                    maxsize = max(maxsize, (int) st.size());
                    lifeline = 0;
                }
                else {
                    lifeline = 1;
                    while (!st.empty()) st.pop();
                    st.push(arr[i]);
                }
            }

            else {
                lifeline = 1;
                while (!st.empty()) st.pop();
                st.push(arr[i]);
            }
        }

    }
    cout << maxsize << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
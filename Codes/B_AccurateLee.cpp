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
        string s;
        cin >> s;
        stack<char> st;
        int zerocnt = 0;
        for (int i = n - 1;i >= 0;i--) {
            if (s[i] == '0') {
                st.push('0');
                zerocnt++;
            }
            else {
                if (zerocnt == 0) st.push('1');
                else {
                    while (zerocnt > 1) {
                        st.pop();
                        zerocnt--;
                    }

                }

            }
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;

    }
    return 0;
}
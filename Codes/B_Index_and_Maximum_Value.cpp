#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> nums[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;

        cin >> n >> m;
        vl nums(n);
        ll current_ans = -1;
        for (int i = 0;i < n;i++) {
            cin >> nums[i];
            current_ans = max(current_ans, nums[i]);
        }


        for (int i = 0;i < m;i++) {
            char ch;
            int l, r;
            cin >> ch >> l >> r;
            if (ch == '+') {
                if (r < current_ans) {
                    cout << current_ans << " ";

                }
                else if (r == current_ans) {
                    cout << ++current_ans << " ";

                }
                else {
                    if (l > current_ans) cout << current_ans << " ";
                    else {
                        cout << ++current_ans << " ";
                    }
                }


            }
            //- er khetre

            else {
                if (r < current_ans) {
                    cout << current_ans << " ";
                }
                else if (r == current_ans) {
                    cout << --current_ans << " ";
                }
                else {
                    if (l > current_ans) cout << current_ans << " ";
                    else {
                        cout << --current_ans << " ";
                    }

                }
            }

        }




        cout << endl;

    }
    return 0;
}
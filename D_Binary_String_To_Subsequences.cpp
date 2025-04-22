#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<int>
#define ll long long
#define vl vector<long long>
#define fori for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vi result(n); 
    stack<int> zero_ind, one_ind; 
    int curr_type = 0; 

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (!one_ind.empty()) {
                int subseq_num = one_ind.top();
                one_ind.pop();
                result[i] = subseq_num;
                zero_ind.push(subseq_num); 
            }
            else {
                ++curr_type;
                result[i] = curr_type;
                zero_ind.push(curr_type);
            }
        }
        else { 
            if (!zero_ind.empty()) {
                int subseq_num = zero_ind.top();
                zero_ind.pop();
                result[i] = subseq_num;
                one_ind.push(subseq_num); 
            }
            else {
                curr_type++;
                result[i] = curr_type;
                one_ind.push(curr_type);
            }
        }
    }

    cout << curr_type << endl;
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

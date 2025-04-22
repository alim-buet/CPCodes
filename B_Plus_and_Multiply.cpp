#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "Yes" << endl;
#define no      cout << "No" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    queue<int> candidates;
    candidates.push(1);
    int isfound = 0;

    while (!candidates.empty()) {
        int x = candidates.front();
        candidates.pop();

        int num1 = a * x;
        int num2 = x + b;
        if (n == num1 || n == num2) {
            isfound = 1;
            break;
        }
        else {
            if (num1 < n) candidates.push(num1);
            if (num2 < n) candidates.push(num2);
        }
    }

    if (isfound) {
        yes
    }
    else {
        no
    }
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

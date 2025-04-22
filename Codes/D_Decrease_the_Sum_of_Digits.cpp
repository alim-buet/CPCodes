#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int digitSumFunc(ll n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int digitCountFunc(ll n) {
    int ct = 0;
    while (n) {
        n /= 10;
        ct++;
    }
    return ct;
}

void solve() {
    ll n, s;
    cin >> n >> s;

    int dCount = digitCountFunc(n);
    int dSum = digitSumFunc(n);

    if (dSum <= s) {
        cout << 0 << endl;
        return;
    }

    int presum = 0;
    string num = to_string(n);
    int lastind = -1;

    for (int i = 0; i < dCount; i++) {
        int d = num[i] - '0';
        if (presum + d + 1 > s) {
            lastind = i - 1;
            break;
        }
        else {
            presum += d;
        }
    }

    if (lastind == -1) {
        string cng(dCount, '0');
        cng = "1" + cng;
        ll c = stoll(cng);
        cout << c - n << endl;
        return;
    }

    while (lastind >= 0 && num[lastind] == '9') {
        num[lastind] = '0';
        lastind--;
    }

    if (lastind >= 0) {
        num[lastind]++;
    }
    else {
        num = "1" + num;
    }

    for (int i = lastind + 1; i < dCount; i++) {
        num[i] = '0';
    }

    ll c = stoll(num);
    cout << c - n << endl;
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

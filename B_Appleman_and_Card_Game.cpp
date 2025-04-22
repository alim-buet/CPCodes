#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    ll n, k;cin >> n >> k;
    string s;cin >> s;
    vl freq(300, 0);
    for (int i = 0;i < n;i++) {
        freq[s[i]]++;
    }
    sort(freq.begin(), freq.end(), greater<int>());
    ll ans = 0;
    int ind = 0;
    while (k)
    {

        if (freq[ind] >= k) {

            ans += k * k;
            k = 0;
            break;
        }
        else {
            ans += (freq[ind] * freq[ind]);

            k -= freq[ind];
            ind++;

        }
    }
    cout << ans << endl;



    return 0;
}
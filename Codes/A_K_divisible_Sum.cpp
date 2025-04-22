#include<bits/stdc++.h>
using namespace std;
bool ispossible(int n, int k, long long mid) {
    if (mid == 1 && (mid * n) % k!=0) return false;


    return ((n * mid) >= k);


}
long long  search(int n, int k) {
    long long l = 0;
    long long r = 10000000005;
    long long  ans = -1;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        if (ispossible(n, k, mid)) {
            r = mid - 1;
            ans = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;

}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == 1) cout << k << endl;
        else {
            cout << search(n, k) << endl;
        }
    }

    return 0;
}
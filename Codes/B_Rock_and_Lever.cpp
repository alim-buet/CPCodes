#include<bits/stdc++.h>
using namespace std;

int findMSBPosition(int num) {
    int position = -1;

    while (num > 0) {
        num >>= 1;
        position++;
    }

    return position;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long digitcounts[32] = {};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            digitcounts[findMSBPosition(x)]++;
        }
        long long ans = 0;

        for (int i = 0;i < 32;i++) {
            ans += ((digitcounts[i]) * (digitcounts[i] - 1)) / 2;

        }
        cout << ans << endl;
    }

    return 0;
}

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
        int digitcounts[32];
        memset(digitcounts, 0, sizeof(digitcounts));
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            digitcounts[findMSBPosition(x)]++;
        }

        long long ans = 0;

        for (int i = 0;i < 32;i++) {
            ans+=


        }
        cout << ans << endl;






    }


    return 0;
}

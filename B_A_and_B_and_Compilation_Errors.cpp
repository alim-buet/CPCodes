#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int totalxor = 0;
    for (int i = 0;i < n;i++) {
        int x;
        cin >> x;
        totalxor ^= x;
    }
    int ans1 = totalxor;
    for (int i = 0;i < n - 1;i++) {
        int y;
        cin >> y;
        ans1 ^= y;

    }
    for (int i = 0;i < n - 2;i++) {
        int z;
        cin >> z;
        totalxor ^= z;
    }
    int ans2 = totalxor ^ ans1;
    cout << ans1 << endl << ans2 << endl;
    return 0;
}
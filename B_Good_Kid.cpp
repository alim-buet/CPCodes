#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int nums[12];
        for (int i = 0;i < n;i++) {
            cin >> nums[i];
        }
        sort(nums, nums + n);

        int ans = nums[0] + 1;
        for (int i = 1;i < n;i++) {
            ans *= nums[i];
        }
        cout << ans << endl;
    }

    return 0;
}
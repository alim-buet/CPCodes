#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        int maxel = -2, maxelindex = 0;
        int minel = 1000, minelindex = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (max(maxel, nums[i]) == nums[i]) {
                maxel = nums[i];
                maxelindex = i + 1;
            }
            if (min(minel, nums[i]) == nums[i]) {
                minel = nums[i];
                minelindex = i + 1;
            }

        }
        int steps = min(max(maxelindex, minelindex), min(maxelindex, minelindex) + (n - max(maxelindex, minelindex)) + 1);
        steps = min(steps, n - min(maxelindex, minelindex) + 1);
        cout << steps << endl;



    }

    return 0;
}
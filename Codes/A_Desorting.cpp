#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> nums(n);
        int issorted = 1;
        cin >> nums[0];
        long long mindiff = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] < nums[i - 1]) issorted = 0;
            else {
                mindiff = min(mindiff, nums[i] - nums[i - 1]);
            }

        }
        if (issorted) {
            cout << (mindiff / 2) + 1 << endl;


        }
        else cout << 0 << endl;

    }

    return 0;
}
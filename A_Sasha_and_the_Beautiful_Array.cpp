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
        vector<int> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

        }
        sort(arr.begin(), arr.end());
        for (int i = 1;i < n;i++) {
            sum += arr[i] - arr[i - 1];
        }
        cout << sum << endl;



    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    int temp;
    vector<long long> arr(2000003);
    fill(arr.begin(), arr.end(), 0);
    for (int i = 1;i < 200002;i++) {
        temp = i;
        while (temp)
        {
            arr[i] += temp % 10;

            temp /= 10;
        }
        arr[i] += arr[i - 1];

    }
    while (t--) {
        int n;
        cin >> n;

        cout << arr[n] << endl;

    }
    return 0;
}
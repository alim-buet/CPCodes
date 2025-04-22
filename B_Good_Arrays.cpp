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
        int arr[n];
        long long sum = 0;
        int offset = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (i != n - 1) {
                if (arr[i] == 1) offset += 1;
                else offset -= 1;
            }

        }
        if (n == 1) cout << "NO" << endl;
        else if (offset >= arr[n - 1]) cout << "NO" << endl;
        else yes;




    }

    return 0;
}
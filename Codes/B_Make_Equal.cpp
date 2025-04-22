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
        int sum = 0;
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        int dist = sum / n;
        if (arr[0]<dist || arr[n - 1]> dist) no
        else {
            int flag = 1;
            int rem;
            for (int i = 1;i < n;i++) {
                arr[i] = (arr[i - 1] - dist) + arr[i];

                if (arr[i] < dist) {
                    flag = 0;
                    break;
                }

            }
            if (flag) yes
            else no
        }

    }

    return 0;
}
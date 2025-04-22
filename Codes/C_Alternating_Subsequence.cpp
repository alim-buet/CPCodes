#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        for (int i = 0;i < n;i++) {
            int maxamongsame = arr[i];
            int j = i;
            int sign = arr[i] / abs(arr[i]);

            while (j < n && sign == arr[j] / abs(arr[j]))
            {

                maxamongsame = max(maxamongsame, arr[j]);
                j++;
            }
            sum += maxamongsame;
            i = j - 1;
        }
        cout << sum << endl;



    }
    return 0;
}
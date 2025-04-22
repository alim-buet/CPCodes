#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    string num;
    cin >> num;
    int lasteven = -1;
    for (int i = 0;i < num.size();i++) {
        if (num[i] % 2 == 0) {
            lasteven = i;
        }
    }
    if (lasteven == -1) cout << lasteven << endl;
    else {
        int n = num.size();
        int isdone = 0;
        for (int i = 0;i < n;i++) {
            if (num[i] % 2 == 0 and num[i] < num[n - 1]) {
                swap(num[i], num[n - 1]);
                isdone = 1;
                break;
            }
        }
        if (isdone) {
            cout << num << endl;
        }
        else {
            swap(num[lasteven], num[n - 1]);
            cout << num << endl;
        }
    }
    return 0;
}
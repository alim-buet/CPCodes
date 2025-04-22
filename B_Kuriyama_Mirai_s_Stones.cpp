#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> values(n);
    vector<long long int> sums(n + 5);
    sums[0] = 0;
    for (int i = 0; i < n; i++)

    {
        cin >> values[i];
        sums[i + 1] = sums[i] + values[i];


    }
    sort(values.begin(), values.end());
    vector<long long int> increasingSum(n + 5);
    increasingSum[0] = 0;
    for (int i = 0;i < n;i++) {
        increasingSum[i + 1] = increasingSum[i] + values[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << sums[r] - sums[l - 1] << endl;

        }
        else {
            cout << increasingSum[r] - increasingSum[l - 1] << endl;
        }

    }


    return 0;
}
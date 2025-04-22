#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int l = 1, r = 1, paisi = 0;
    cin >> arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (!paisi) {
            if (arr[i] < arr[i - 1]) {
                l = i;
                r = l;
                paisi = 1;
            }
        }

        if (paisi) {
            if (arr[i] < arr[i - 1]) {
                r++;
            }


        }
    }



    reverse(arr.begin() + l - 1, arr.begin() + r);

    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes" << endl << l << " " << r << endl;

    }
    else {
        cout << "no" << endl;
    }

    return 0;
}

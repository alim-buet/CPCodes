
#include<bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    int growth[12];
    for (int i = 0;i < 12;i++) {
        cin >> growth[i];
    }
    sort(growth, growth + 12, greater<int>());

    if (accumulate(growth, growth + 12, 0) < k) cout << (-1) << endl;
    
    else {
        int count = 0, current = 0;
        for (int i = 0;i < 13;i++) {
            if (current >= k) {

                break;
            }
            else {
                current += growth[i];
                count++;
            }
        }
        cout << count << endl;

    }


    return 0;
}
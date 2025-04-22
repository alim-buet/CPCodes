#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int candies[n];
        int sum = 0, ones = 0, twos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> candies[i];

            sum += candies[i];
            if (candies[i] == 2) twos++;
            else ones++;
        }
        if (sum % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            int half = sum / 2;
            if (twos * 2 <= half) cout << "YES" << endl;
            else {
                if (half % 2 == 0) cout << "YES" << endl;
                else {
                    if (ones == 0) cout << "NO" << endl;
                    else cout << "YES" << endl;
                }

            }


        }



    }

    return 0;
}
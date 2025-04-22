#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int nofn = n;

        int sum = 0;

        while (n--)
        {

            int x;
            cin >> x;
            sum += x;
        }

        if (sum % n != 0) cout << "No" << endl;
        else {
            int eq = sum / nofn;

            
        }
    }



    return 0;
}
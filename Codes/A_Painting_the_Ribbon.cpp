// #include<bits/stdc++.h>
// using namespace std;
// #define yes     cout<<"YES"<<endl;
// #define no      cout<<"NO"<<endl;
// #define vi      vector<int>
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int TotalParts, ColorNumber, RepaintNumber;
//         cin >> TotalParts >> ColorNumber >> RepaintNumber;
//         int RepaintNeeded = TotalParts - (int) ceil((float) TotalParts / ColorNumber);
//         if (RepaintNeeded <= RepaintNumber) no
//         else yes
//     }
//     return 0;
// }
#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (m <= k)
        {
            if ((n - (int) ceil((float) n / m)) <= k)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        unordered_multiset<long long int> prev;
        while (n--)
        {
            long long int x;
            cin >> x;
            prev.insert(x);
        }
        while (m--)
        {
            long long int current;
            cin >> current;
            if (prev.find(current) != prev.end()) {
                cout << "YES" << endl;
                prev.insert(current);
            }
            else {
                cout << "NO" << endl;
                prev.insert(current);
            }
        }



    }


    return 0;
}
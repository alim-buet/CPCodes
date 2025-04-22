#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long int> CandyCount;
        while (n--)
        {
            long long int x;
            cin >> x;
            CandyCount.insert(x);
        }
        long long int total = 0;

        while (k--)
        {
            auto it = --CandyCount.end();
            total += (*it);
            CandyCount.insert((*it) / 2);

            CandyCount.erase(it);

        }
        cout << total << endl;


    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int maximum = -1, minimum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            maximum = max(maximum, x);
            minimum = min(minimum, x);



        }
        cout << maximum - minimum << endl;


    }

    return 0;
}
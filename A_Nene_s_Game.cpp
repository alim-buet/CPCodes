#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, q;
        cin >> k >> q;
        int remove_pos[k];
        for (int i = 0;i < k;i++) {
            cin >> remove_pos[i];
        }
        while (q--)
        {
            int n;
            cin >> n;
            while (n >= remove_pos[0]) {
                for (int j = k - 1;j >= 0;j--) {
                    if (n >= remove_pos[j]) n -= (j + 1);
                }
            }
            cout << n << " ";

        }
        cout << endl;

    }
    return 0;
}
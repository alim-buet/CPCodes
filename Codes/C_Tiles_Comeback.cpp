#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> tilescolors(n);
        cin >> tilescolors[0];
        int firstcolorcount = 1, firstcolorindex = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> tilescolors[i];
            if (tilescolors[i] == tilescolors[0]) {
                firstcolorcount++;
                if (firstcolorcount <= k) firstcolorindex = i;

            }

        }
        int lastcolorcount = 1, lastcolorindex = n - 1;
        for (int i = n - 2; i >= 0;i--) {
            if (tilescolors[i] == tilescolors[n - 1]) {
                lastcolorcount++;
                if (lastcolorcount <= k) lastcolorindex = i;


            }
        }
        if (tilescolors[0] == tilescolors[n - 1]) {
            if (firstcolorcount >= k) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if (n == k) {
            if (firstcolorcount == n) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            if (firstcolorcount >= k && lastcolorcount >= k && firstcolorindex < lastcolorindex) cout << "YES" << endl;
            else if (firstcolorcount == n) cout << "YES" << endl;
            else cout << "NO" << endl;
        }







    }

    return 0;
}
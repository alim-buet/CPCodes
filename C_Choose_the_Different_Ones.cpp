#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int x;
        set<int> set1;
        set<int> set2;
        set<int> set3;
        for (int i = 0;i < n;i++) {
            cin >> x;
            if (x <= k) {
                set1.insert(x);
                set3.insert(x);
            }


        }
        int set1size = set1.size();
        for (int i = 0;i < m;i++) {
            cin >> x;
            if (x <= k) {
                set2.insert(x);
                set3.insert(x);
            }
        }
        if (set1.size() < k / 2 || set2.size() < k / 2) no
        else {
            if (set3.size() == k) yes
            else no


        }

    }
    return 0;
}
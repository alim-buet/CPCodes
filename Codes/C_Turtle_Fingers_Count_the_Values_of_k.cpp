#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, l;
        cin >> a >> b >> l;
        long long ans;
        int count = 0;
        unordered_map<long long, int> k_ct;
        long long k;
        for (int i = 0;i <= 21;i++) {
            for (int j = 0;j <= 21;j++) {
                ans = (long long) (pow((float) a, (float) i) * pow((float) b, (float) j));
                if (l % ans == 0) {
                    k = l / ans;
                    if (k_ct[k] == 0) {
                        count++;
                        k_ct[k]++;

                    }


                }

            }
        }
        cout << count << endl;
    }
    return 0;
}
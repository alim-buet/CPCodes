#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int d, sum;
    cin >> d >> sum;
    int mint, maxt;
    int minsum = 0, maxsum = 0;
    vector<pair<int, int>> timeconst;
    for (int i = 0;i < d;i++) {

        cin >> mint >> maxt;
        minsum += mint;
        maxsum += maxt;
        timeconst.push_back(make_pair(mint, maxt));
    }
    if (sum >= minsum && sum <= maxsum) {
        yes
            int rem = sum;
        vi times(d);
        for (int i = 0;i < d;i++) {
            times[i] = timeconst[i].first;

            rem -= times[i];
        }
        int ind = 0;
        while (rem) {
            if ((timeconst[ind].second - times[ind]) >= rem) {
                
                times[ind] += rem;
                rem = 0;
            }
            else {
                times[ind] += (timeconst[ind].second - timeconst[ind].first);
                rem -= (timeconst[ind].second - timeconst[ind].first);

            }
            ind++;
        }
        for (int i = 0;i < d;i++) {
            cout << times[i] << " ";
        }
        cout << endl;
    }
    else no
        return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi PeepsinStation(n);
        for (int i = 0;i < n;i++) {
            cin >> PeepsinStation[i];

        }

        int people_seen = 0, station_passed = 0, validpeeps = 0;
        int l = 0, r = 0;
        while (r < n)
        {
            if (people_seen > k) {
                people_seen -= PeepsinStation[l];
                l++;
                r++;
                people_seen += PeepsinStation[r];
                if (people_seen < k) validpeeps = min(validpeeps,people_seen);
                station_passed--;


            }
            else {
                people_seen += PeepsinStation[r];
                station_passed++;
                r++;
                if (people_seen < k) validpeeps = min(validpeeps, people_seen);

            }

        }
        cout << validpeeps << " " << station_passed << endl;



    }
    return 0;
}
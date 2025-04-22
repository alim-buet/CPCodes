#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long  days, points, attendencepoints, taskpoints;
        cin >> days >> points >> attendencepoints >> taskpoints;
        long long totaltasks = (days - 1) / 7 + 1;
        int daytocompletetasks = (totaltasks % 2 == 0) ? (totaltasks / 2) : (totaltasks / 2 + 1);
        long long ans = 0;
        if ((daytocompletetasks * attendencepoints + totaltasks * taskpoints) <= points) {
            ans = daytocompletetasks;
            long long rempoint = points - (daytocompletetasks * attendencepoints + totaltasks * taskpoints);
            long long extraday = (rempoint % attendencepoints == 0) ? (rempoint / attendencepoints) : (rempoint / attendencepoints) + 1;
            ans += extraday;


        }
        else {
            ans = (points) / (attendencepoints + 2 * taskpoints);
            long long exday = ((points) % (attendencepoints + 2 * taskpoints) == 0) ? (0) : 1;
            ans += exday;
        }
        cout << days - ans << endl;



    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
struct houses
{
    int colorcost[3];
};

int main() {
    int t;
    cin >> t;
    for (int ts = 1;ts <= t;ts++)
    {

        cin.ignore();
        int n; //number of houses
        cin >> n;
        struct houses houseinfo[n+2];
        for (int i = 1;i <= n;i++) {
            cin >> houseinfo[i].colorcost[0] >> houseinfo[i].colorcost[1] >> houseinfo[i].colorcost[2];
        }
        //0-red 1-green 2-blue
        int dp[21][3];  //dp[i][j] asks what is the minimum cost till ith house if we select j colorcost prevously
        dp[1][0] = houseinfo[1].colorcost[0];
        dp[1][1] = houseinfo[1].colorcost[1];
        dp[1][2] = houseinfo[1].colorcost[2];
        for (int i = 2;i <= n;i++) {
            for (int j = 0;j < 3;j++) {
                dp[i][j] = houseinfo[i].colorcost[j] + min(dp[i - 1][(j + 1) % 3], dp[i - 1][(j + 2) % 3]);
            }
        }
        cout << "Case " << ts << ": " << min(dp[n][0], min(dp[n][1], dp[n][2])) << endl;


    }



    return 0;
}
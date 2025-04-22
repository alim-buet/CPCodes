#include<bits/stdc++.h>
using namespace std;


int StepsToOne(int n, vector<int> dp) {

    if (n == 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (dp[n] != 0) return dp[n];


    else {
        if (n % 3 == 0 && n % 2 == 0) {
            return dp[n] = min(StepsToOne(n - 1, dp), min(StepsToOne((n / 2), dp), StepsToOne((n / 3), dp))) + 1;
        }
        else if (n % 3 == 0 && n % 2 != 0) {
            return dp[n] = min(StepsToOne(n - 1, dp), StepsToOne(n / 3, dp)) + 1;
        }
        else if (n % 2 == 0 && n % 3 != 0) {
            return dp[n] = min(StepsToOne(n - 1, dp), StepsToOne(n / 2, dp)) + 1;
        }
        else {
            return dp[n] = StepsToOne(n - 1, dp) + 1;
        }
    }

}

int main() {
    int t;
    cin >> t;
    vector<int> dp(20000000);
    fill(dp.begin(), dp.end(), 0);

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "Case " << i << ": " << StepsToOne(n, dp) << endl;


    }





    return 0;
}
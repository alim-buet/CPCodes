#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int T, N;
int priorityIndex[16][16];
int dp[1 << 16];

int solve(int mask) {
    if (dp[mask] != -1) return dp[mask];

    int man = __builtin_popcount(mask); // Number of men already paired
    if (man == N) return 0;

    int maxPriority = 0;
    for (int woman = 0; woman < N; ++woman) {
        if (!(mask & (1 << woman))) { // If woman is not yet paired
            maxPriority = max(maxPriority, priorityIndex[man][woman] + solve(mask | (1 << woman)));
        }
    }

    return dp[mask] = maxPriority;
}

int main() {
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        cin >> N;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> priorityIndex[i][j];
            }
        }

        memset(dp, -1, sizeof(dp));
        int result = solve(0);
        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}

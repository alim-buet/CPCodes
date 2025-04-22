#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> firstMovie(n), secondMovie(n);

    // Read inputs
    for (int i = 0; i < n; i++) cin >> firstMovie[i];
    for (int i = 0; i < n; i++) cin >> secondMovie[i];

    // Counting positive, neutral, and negative reviews for both movies
    int posFirst = 0, negFirst = 0, posSecond = 0, negSecond = 0;

    for (int i = 0; i < n; i++) {
        if (firstMovie[i] == 1) posFirst++;
        else if (firstMovie[i] == -1) negFirst++;

        if (secondMovie[i] == 1) posSecond++;
        else if (secondMovie[i] == -1) negSecond++;
    }

    // Calculate the minimum possible rating by balancing reviews
    int totalPos = posFirst + posSecond;
    int totalNeg = negFirst + negSecond;
    int maxRating = min(totalPos - totalNeg, posFirst + posSecond - negFirst - negSecond);

    cout << maxRating << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

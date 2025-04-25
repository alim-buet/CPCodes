#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<pair<int, int>> people(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    // Store a[i], b[i] pairs
    for (int i = 0; i < n; ++i)
        people[i] = {a[i], b[i]};

    // Sort by a[i] - b[i] in descending order
    sort(people.begin(), people.end(), [](auto &x, auto &y)
         { return (x.first - x.second) > (y.first - y.second); });

    // Prefix sums
    vector<int> prefixA(n + 1, 0), prefixB(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefixA[i + 1] = prefixA[i] + people[i].first;
        prefixB[i + 1] = prefixB[i] + people[i].second;
    }

    int max_min_rating = INT_MIN;

    // Try k people for movie A, n-k for movie B
    for (int k = 0; k <= n; ++k)
    {
        int ratingA = prefixA[k];
        int ratingB = prefixB[n] - prefixB[k];
        max_min_rating = max(max_min_rating, min(ratingA, ratingB));
    }

    cout << max_min_rating << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

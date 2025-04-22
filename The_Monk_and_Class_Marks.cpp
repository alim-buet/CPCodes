#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, string>& a, const pair<int, string>& b)
{
    // Compare by marks in descending order
    if (a.first != b.first) {
        return a.first > b.first;
    }

    // If marks are equal, compare by names lexicographically
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, string>> results;

    while (n--)
    {
        string name;
        int marks;
        cin >> name >> marks;
        results.push_back({ marks, name });
    }

    sort(results.begin(), results.end(), cmp);

    for (auto it = results.begin(); it != results.end(); ++it) {
        cout << it->second << " " << it->first << endl;
    }

    return 0;
}

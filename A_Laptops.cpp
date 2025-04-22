#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> pricequality;
    for (int i = 0;i < n;i++) {
        int pri, qu;
        cin >> pri >> qu;
        pricequality.push_back(make_pair(pri, qu));
    }
    sort(pricequality.begin(), pricequality.end());
    int flag = 0;
    for (int i = 0;i < n - 1;i++) {
        if (pricequality[i].second > pricequality[i + 1].second) {
            flag = 1;
            break;
        }

    }
    if (flag) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;

    return 0;
}
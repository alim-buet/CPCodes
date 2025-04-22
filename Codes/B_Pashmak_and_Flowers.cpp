#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    vector<long long int> beauties(n);

    for (int i = 0;i < n;i++) {
        cin >> beauties[i];
    }

    long long minnum = *min_element(beauties.begin(), beauties.end());
    long long minct = count(beauties.begin(), beauties.end(), minnum);
    long long maxnum = *max_element(beauties.begin(), beauties.end());
    long long maxct = count(beauties.begin(), beauties.end(), maxnum);
    if (minct == beauties.size()) {
        cout << 0 << " " << ((minct*(minct-1)) / 2) << endl;
    }
    else {
        cout << (maxnum - minnum) << " " << (maxct * minct) << endl;


    }
    return 0;
}
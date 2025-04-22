#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    int wormsrange[n];
    for (int i = 0;i < n;i++) {
        cin >> wormsrange[i];
    }
    int k;
    cin >> k;
    cout << "It is in position No. " << wormposition(wormsrange, k) << endl;

    return 0;
}
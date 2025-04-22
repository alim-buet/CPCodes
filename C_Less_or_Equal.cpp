#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int n, k;
    cin >> n >> k;
    vi seq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }
    sort(seq.begin(), seq.end());
    if ((seq[k - 1] == seq[k]) || (k == 0 && seq[0] == 1)) cout << (-1) << endl;
    else if (k == 0 && seq[0] != 1) cout << seq[0] - 1 << endl;
    else cout << seq[k - 1] << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int dogfood, catfood, commonfood, dog, cat;
        cin >> dogfood >> catfood >> commonfood >> dog >> cat;
        int remdog = ((dog - dogfood) > 0) ? (dog - dogfood) : 0;
        int remcat = ((cat - catfood) > 0) ? (cat - catfood) : 0;
        if (remdog + remcat > commonfood) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}

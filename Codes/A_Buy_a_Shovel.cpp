#include<bits/stdc++.h>
using namespace std;
int main() {
    int k, r;
    cin >> k >> r;
    int shovel = 1;
    while (true)
    {
        if ((shovel * k) % 10 == r || ((shovel * k) % 10 == 0)) {
            break;
        }
        else {
            shovel++;
        }
    }
    cout << shovel << endl;

    return 0;
}
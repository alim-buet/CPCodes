#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string winner;
    string x;
    cin >> x;
    int lead = 1;
    winner = x;
    while (n > 1)
    {
        n--;
        cin >> x;
        if (x == winner) {
            lead++;
        }
        else {
            if (lead == 0) {
                winner = x;
            }
            else {
                lead--;
            }
        }
    }
    cout << winner << endl;



    return 0;
}
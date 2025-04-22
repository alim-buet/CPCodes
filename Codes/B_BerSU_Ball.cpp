#include<bits/stdc++.h>
using namespace std;
int main() {
    int b;
    cin >> b;
    int boys[b];
    for (int i = 0;i < b;i++) {
        cin >> boys[i];
    }
    int g;
    cin >> g;
    int girls[g];
    for (int i = 0;i < g;i++) {
        cin >> girls[i];
    }
    sort(boys, boys + b);
    sort(girls, girls + g);
    int ans = 0;
    for (int i = 0;i < g;i++) {
        if (girls[i] == 0) {
            continue;
        }
        for (int j = 0; j < b; j++)
        {
            if (boys[j] == 0) {
                continue;
            }

            if ((abs(girls[i] - boys[j])) <= 1) {
                ans++;
                girls[i] = 0;
                boys[j] = 0;
                break;
            }

        }

    }
    cout << ans << endl;
    return 0;
}
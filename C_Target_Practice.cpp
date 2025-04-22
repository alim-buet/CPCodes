#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> arrows(10);
        for (int i = 0; i < 10; i++) {
            cin >> arrows[i];
        }

        int ans = 0;
        for (int r = 0; r < 10; r++) {
            for (int c = 0; c < 10; c++) {
                if (arrows[r][c] == 'X') {
                    if (r == 0 || r == 9 || c == 0 || c == 9) {
                        ans += 1;
                    }
                    else if ((r == 1 && c != 0 && c != 9) || (r == 8 && c != 0 && c != 9) || (c == 1 && r != 0 && r != 9) || (c == 8 && r != 0 && r != 9)) {
                        ans += 2;
                    }
                    else if ((r == 2 && c >= 2 && c <= 7) || (r == 7 && c >= 2 && c <= 7) || (c == 2 && r >= 2 && r <= 7) || (c == 7 && r >= 2 && r <= 7)) {
                        ans += 3;
                    }
                    else if ((r == 3 && c >= 3 && c <= 6) || (r == 6 && c >= 3 && c <= 6) || (c == 3 && r >= 3 && r <= 6) || (c == 6 && r >= 3 && r <= 6)) {
                        ans += 4;
                    }
                    else if ((r == 4 && c >= 4 && c <= 5) || (r == 5 && c >= 4 && c <= 5) || (c == 4 && r >= 4 && r <= 5) || (c == 5 && r >= 4 && r <= 5)) {
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

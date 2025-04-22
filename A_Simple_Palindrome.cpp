#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string vowels = "aeiou";

        if (n <= 5) {
            cout << vowels.substr(0, n) << endl;
        }
        else {
            int cnt = n / 5;
            int rem = n % 5;
            string ans;

            for (auto ch : vowels) {
                for (int i = 0;i < cnt;i++) ans.push_back(ch);
                if (rem > 0) ans.push_back(ch);
                rem--;

            }
            cout << ans << endl;
        }
    }
    return 0;
}

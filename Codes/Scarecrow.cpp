#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    for (int tes = 1;tes <= t;tes++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vi streakofDot;
        vi streakofHash;
        int i = 0;
        if (s[0] == '#') {
            while (s[i] == '#')
            {
                i++;

            }
        }
        for (i;i < s.size();i++) {
            int ind = i;
            if (s[i] == '.') {
                while (s[i] == '.') {
                    i++;
                }
                streakofDot.push_back(i - ind);
            }
            else {
                while (s[i] == '#')
                {
                    i++;

                }
                streakofHash.push_back(i - ind);
            }
            i--;
        }

        streakofHash.push_back(2);
        int ans = 0;
        for (int j = 0;j < streakofDot.size();j++) {
            if (streakofHash[j] == 1 && streakofDot[j] % 3 == 1) {
                ans += (int) ceil(((streakofDot[j] - 1)) / 3.00);
                ans += 1;
                streakofDot[j + 1] -= 1;
            }
            else {
                ans += (int) ceil(((streakofDot[j])) / 3.00);

            }
        }
        cout << "Case " << tes << ": " << ans << endl;

    }
    return 0;
}
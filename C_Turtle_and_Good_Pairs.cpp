#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        string s;cin >> s;
        vi freq(26);//0-a ...
        for (int i = 0;i < n;i++) {
            freq[(s[i]) - 'a']++;
        }
        vector<int> availabe_char;
        for (int i = 0;i < 26;i++) {
            if (freq[i]) availabe_char.push_back(i);
        }
        int curr_char = availabe_char[0];
        int char_ind = 0;
        for (int i = 0;i < n;i++) {
            char_ind = (char_ind) % (availabe_char.size());
            curr_char = availabe_char[char_ind];
            if (freq[curr_char]) {
                cout << (char) ('a' + curr_char);
                freq[curr_char]--;
                char_ind++;
            }
            else {
                char_ind++;
                i--;
            }




        }

        cout << endl;


    }
    return 0;
}
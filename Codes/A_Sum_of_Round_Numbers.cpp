#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        int count = 0;
        for (auto ch : num) {
            if (ch != '0') {
                count++;
            }
        }
        cout << count << endl;
        int len = num.length();
        for (int i = 0;i < len;i++) {
            if (num[i] != '0') {
                int pos = len - i - 1;
                if (pos == 0) {
                    cout << num[i];
                }
                else {
                    cout << (int) ((int) (num[i] - '0')) * pow(10, pos) << " ";
                }

            }
        }
        cout << endl;
    }

    return 0;
}
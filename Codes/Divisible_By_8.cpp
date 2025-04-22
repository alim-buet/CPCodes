#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string num;
        cin >> num;
        if (n == 1) {
            cout << 8 << endl;
        }
        else if (n == 2) {
            if (((int) ((num[0] - '0') * 10 + (num[1] - '0')) % 8 == 0)) {
                cout << num << endl;
            }
            else if (num[0] == '1') cout << 16 << endl;
            else if (num[0] == '2') cout << 24 << endl;
            else if (num[0] == '3') cout << 32 << endl;
            else if (num[0] == '4') cout << 48 << endl;
            else if (num[0] == '5') cout << 56 << endl;
            else if (num[0] == '6') cout << 64 << endl;
            else if (num[0] == '7') cout << 72 << endl;
            else if (num[0] == '8') cout << 88 << endl;
            else if (num[0] == '9') cout << 96 << endl;


        }
        else {
            int l;
            int last = (num[n - 3] - '0') * 100 + (num[n - 2] - '0') * 10;
            if ((last + (int) (num[n - 1] - '0')) % 8 == 0) {
                cout << num << endl;
            }
            else {
                for (int i = 0;i < 9;i += 2) {
                    if ((last + i) % 8 == 0) {
                        l = i;
                        break;

                    }
                }
                for (int i = 0;i < n - 1;i++) {
                    cout << num[i];
                }
                char ch = (char) (l + '0');
                cout << ch << endl;

            }

        }
    }

    return 0;
}
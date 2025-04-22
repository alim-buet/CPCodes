#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string sentence;
        cin >> sentence;
        int len = sentence.length();
        char uniqchar[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
        int appearance[26];
        for (int i = 0;i < 26;i++) {
            int count = 0;
            if (uniqchar[i] == ' ') {
                continue;
            }
            for (int j = 0;j < len;j++) {
                if (uniqchar[i] == sentence[j]) {
                    count++;
                    sentence[j] = ' ';
                }

            }
            appearance[i] = count;
        }
        for (int k = 0;k < 26;k++) {
            if (appearance[k] != 0) {
                cout << uniqchar[k] << " = " << appearance[k] << endl;

            }
        }
        cout << endl;

    }
    return 0;
}
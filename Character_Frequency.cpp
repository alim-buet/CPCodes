#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        string sentence;
        char ch;
        getline(cin, sentence);
        cin >> ch;
        int count = 0;
        for (char c : sentence) {
            if (c == ch) {
                count++;
            }
        }
        cout << "Occurrence of " << "'" << ch << "'" << " in " << "'" << sentence << " ' = " << count << endl;
        getchar();

    }
    return 0;
}
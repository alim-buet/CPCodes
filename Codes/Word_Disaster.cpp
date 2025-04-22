#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string sentence;
        getline(cin, sentence);

        vector<string> words;
        istringstream iss(sentence);
        string word;

        while (iss >> word) {
            words.push_back(word);
        }

        for (int i = 0; i < words.size(); i++) {
            if (i == words.size() - 1) {
                reverse(words[i].begin(), words[i].end());
                cout << words[i];
            }
            else {
                reverse(words[i].begin(), words[i].end());
                cout << words[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

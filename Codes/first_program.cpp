#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string s;
        // Clear the newline character from the previous input
        getline(cin, s);

        string vowels, consonants;

        for (char c : s) {
            if (isVowel(c)) {
                vowels += c;
            }
            else if (c != ' ') {
                consonants += c;
            }
        }

        cout << vowels << '\n' << consonants << '\n';
    }

    return 0;
}

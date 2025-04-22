#include <iostream>
#include <vector>
#include <string>

using namespace std;
int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    string sentence;
    int n;

    cin >> n;
    getchar();


    while (n--) {
        vector<string> words;
        string word;
        int uniq = 0;
        getline(cin, sentence);
        int TotalWord = 0;
        for (char c : sentence) {
            if (isspace(c)) {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                    TotalWord++;
                }
            }
            else {
                word += c;
            }
        }

        if (!word.empty()) {
            words.push_back(word);
            TotalWord++;
        }
        int appearances[TotalWord];
        for (int i = 0;i < TotalWord;i++) {
            int count = 1;
            if (words[i].empty()) {
                continue;
            }
            for (int j = i + 1;j < TotalWord;j++) {

                if (words[i].compare(words[j]) == 0) {
                    count++;
                    words[j].clear();




                }
            }
            appearances[uniq] = count;
            uniq++;



        }
        int divider = 1;
        for (int k = 0;k < uniq;k++) {
            if (appearances[k] != 1) {
                divider = divider * factorial(appearances[k]);
            }
        }
        int ans = factorial(TotalWord) / divider;
        cout << 1 << "/" << ans << endl;
        word.clear();
        for (int i = 0;i < TotalWord;i++) {
            words[i].clear();
        }

    }




    return 0;
}

/* Given N strings, print unique strings int lexicographical order with their frequency
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> words;
    while (n--)
    {
        string str;
        cin >> str;
        words[str]++;
    }
    cout << endl;

    for (auto itr : words) {
        cout << itr.first << " " << itr.second << endl;


    }


    return 0;
}
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
        int x;
        vi lastdigitsCount(10);
        for (int i = 0;i < n;i++) { cin >> x;x = x % 10; lastdigitsCount[x]++; }
        bool isPossible = false;
        if ((lastdigitsCount[0] >= 2 and lastdigitsCount[3] >= 1) or (lastdigitsCount[0] >= 1 and lastdigitsCount[1] >= 1 and lastdigitsCount[2]) or (lastdigitsCount[1] >= 3)) {
            isPossible = true;
        }
        else {
            for (int i = 0;i < 10;i++) {
                if (isPossible) break;

                for (int j = 0;j < 10;j++) {
                    if (isPossible) break;
                    for (int k = 0;k < 10;k++) {
                        if (isPossible) break;
                        if (i + j + k == 13 or i + j + k == 23) {
                            if ((i == j) and lastdigitsCount[k] and lastdigitsCount[i] >= 2) isPossible = true;
                            else if (j == k and lastdigitsCount[i] and lastdigitsCount[j] >= 2) isPossible = true;
                            else if (k == i and lastdigitsCount[j] and lastdigitsCount[i] >= 2) isPossible = true;
                            else {
                                if ((i != j and j != k and i != k) and lastdigitsCount[i] and lastdigitsCount[j] and lastdigitsCount[k]) isPossible = true;
                            }

                        }

                    }
                }
            }

        }
        if (isPossible) yes
        else no




    }
    return 0;
}
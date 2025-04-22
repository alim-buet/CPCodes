#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n;
    cin >> n;
    vi works(n);
    for (int i = 0;i < n;i++) cin >> works[i];
    int rest = 0;
    int prev = 0;
    for (int i = 0;i < n;i++) {
        if (prev == 0) {
            if (works[i] == 0) rest++;
            else if (works[i] == 1) prev = 1;
            else if (works[i] == 2) prev = 2;
            else {
                prev = 0;
            }
        }
        else {
            if (works[i] == 0) {
                rest++;
                prev = 0;
            }
            else if (works[i] == 1) {
                if (prev == 1) {
                    rest++;
                    prev = 0;
                }
                else {
                    prev = 1;
                }

            }
            else if (works[i] == 2) {
                if (prev == 2) {
                    rest++;
                    prev = 0;
                }
                else {
                    prev = 2;
                }

            }
            else {
                if (prev == 1) prev = 2;
                else prev = 1;
            }


        }

    }
    cout << rest << endl;



    return 0;
}
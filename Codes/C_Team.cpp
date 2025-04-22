#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int zeroCount, oneCount;
    cin >> zeroCount >> oneCount;

    int minOne = zeroCount - 1;
    int maxOne = (zeroCount + 1) * 2;
    if (oneCount<minOne or oneCount>maxOne) cout << -1 << endl;
    else {
        if (oneCount == minOne) {
            for (int i = 0;i < zeroCount - 1;i++) {
                cout << "01";
            }
            cout << 0 << endl;

        }
        else {
            int extraOne = oneCount - minOne;
            if (extraOne >= 2) {
                cout << "110";
                extraOne -= 2;
                oneCount -= 2;

            }
            else if (extraOne == 1) {
                cout << "10";
                extraOne--;
                oneCount--;
            }
            for (int i = 1;i < zeroCount;i++) {
                if (extraOne >= 1) {
                    cout << "110";

                    extraOne--;
                    oneCount -= 2;
                }

                else {
                    cout << "10";
                    oneCount--;
                }
            }
            if (oneCount > 0) {
                while (oneCount--) cout << "1";
            }
            cout << endl;

        }
    }



    return 0;
}
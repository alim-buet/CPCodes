#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        string num1, num2;
        cin >> num1 >> num2;
        string big, small;
        if (num1 > num2) {
            big = num1;
            small = num2;
        }
        else if (num2 > num1) {
            big = num2;
            small = num1;
        }
        else {
            big = small = num1;
        }

        if (big == small) {
            cout << big << " " << small << endl;
        }
        else {
            int len = big.size();
            for (int i = 1;i < len;i++) {
                if (big[i] > small[i]) {
                    swap(big[i], small[i]);
                }
                if (big < small) swap(big, small);

            }
            cout << big << endl << small << endl;


        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int digit, sum;
    cin >> digit >> sum;
    int maxnum[digit];
    int minnum[digit] = { 0 };
    minnum[0] = 1;
    int minsum = 1;


    int s = 0;
    if ((sum > 9 * digit)) {
        cout << "-1 -1" << endl;
    }
    else if (digit == 1 && sum == 0) {
        cout << "0 0" << endl;
    }
    else if (digit != 1 && sum == 0) {
        cout << "-1 -1" << endl;
    }

    else {
        for (int i = 0;i < digit;i++) {
            if (sum - s >= 10) {
                maxnum[i] = 9;
                s += 9;
            }
            else if (sum - s == 0) {
                maxnum[i] = 0;
            }
            else {
                maxnum[i] = sum - s;
                s += sum - s;
            }
        }
        for (int i = digit - 1;i >= 0;i--) {
            if (sum - minsum == 0) {
                if (i != 0) {
                    minnum[i] = 0;
                }


            }
            else if ((sum - minsum) > 9) {
                minnum[i] = 9;
                minsum += 9;
            }
            else {
                if (i != 0) {
                    minnum[i] = (sum - minsum);
                    minsum += (sum - minsum);

                }
                else {
                    minnum[i] = 1 + (sum - minsum);
                }
            }


        }
        for (int i = 0;i < digit;i++) {
            cout << minnum[i];
        }
        cout << " ";
        for (int i = 0;i < digit;i++) {
            cout << maxnum[i];
        }

    }





    return 0;
}
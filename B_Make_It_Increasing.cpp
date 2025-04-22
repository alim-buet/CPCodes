#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int steps = 0, flag = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i + 1] == 0) {
                flag = 0;
                break;
            }
            if (nums[i] < nums[i + 1]) {
                continue;
            }
            else {
                while (nums[i] >= nums[i + 1])
                {

                    steps++;
                    nums[i] /= 2;

                }


            }

        }
        if (flag == 0) cout << (-1) << endl;
        else cout << steps << endl;



    }

    return 0;
}
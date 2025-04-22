#include<bits/stdc++.h>
using namespace std;
long long int nums[200000];
int main() {
    int t;
    cin >> t;

    nums[0] = 2;
    nums[1] = 3;
    for (int i = 2;i < 1e5;i++) {
        long long int prev = nums[i - 1];
        long long int current = prev + 1;
        while ((current * 3) % (nums[i - 1] + nums[i - 2]) == 0) {
            current++;
        }
        nums[i] = current;
    }


    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0;i < n;i++) {
            cout << nums[i] << " ";
        }




        cout << endl;

    }

    return 0;
}
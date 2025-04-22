#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];

    }
    int maxseq = -2;
    int currentstreak = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] < nums[i + 1]) {
            currentstreak++;

        }
        else {
            maxseq = max(maxseq, currentstreak);
            currentstreak = 1;
        }

    }
    maxseq = max(maxseq, currentstreak);
    cout << maxseq << endl;


    return 0;
}
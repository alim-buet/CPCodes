#include<bits/stdc++.h>
using namespace std;
bool ispossible(int PositionOfstalls[], int numberofstalls, int numberofcows, int distance) {
    int currentpos = PositionOfstalls[0];
    int cowcount = numberofcows - 1;
    for (int i = 1;i < numberofstalls;i++) {
        if (cowcount == 0) break;
        if ((PositionOfstalls[i] - currentpos) >= distance) {
            currentpos = PositionOfstalls[i];
            cowcount--;
        }
    }
    return (cowcount == 0);
}
int search(int PositionOfstalls[], int numberofstalls, int numberofcows) {
    int l = 0, r = PositionOfstalls[numberofstalls - 1], mid;
    int ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ispossible(PositionOfstalls, numberofstalls, numberofcows, mid)) {
            ans = mid;
            l = mid + 1;

        }
        else {
            r = mid - 1;
        }
    }
    return ans;


}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int numberofstalls, numberofcows;
        cin >> numberofstalls >> numberofcows;
        int PositionOfStalls[numberofstalls];
        for (int i = 0;i < numberofstalls;i++) {
            cin >> PositionOfStalls[i];
        }
        sort(PositionOfStalls, PositionOfStalls + numberofstalls);
        cout << search(PositionOfStalls, numberofstalls, numberofcows) << endl;

    }

    return 0;
}
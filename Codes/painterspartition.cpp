#include<bits/stdc++.h>
using namespace std;
bool ispossible(int boards[], int n, int numberofpainters, int key) {
    int currentpainter = 1, nowpainted = 0;
    for (int i = 0; i < n; i++)
    {
        if ((boards[i] + nowpainted) <= key) {
            nowpainted += boards[i];
        }
        else {
            currentpainter++;
            nowpainted = boards[i];
        }

    }
    return (currentpainter >= numberofpainters);


}
int search(int boards[], int n, int numberofpainters) {
    int l = *max_element(boards, boards + n);
    int r = accumulate(boards, boards + n, 0);
    int ans = -1;
    int mid;
    if (numberofpainters > n) return -1;
    else {
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ispossible(boards, n, numberofpainters, mid)) {
                r = mid - 1;
                ans = mid;
            }
            else {
                l = mid + 1;
            }
        }
        return ans;
    }
}
int main() {
    int n, numberofpainters;
    cin >> n >> numberofpainters;
    int boards[n];
    for (int i = 0; i < n; i++)
    {
        cin >> boards[i];
    }
    cout << search(boards, n, numberofpainters) << endl;

    return 0;
}
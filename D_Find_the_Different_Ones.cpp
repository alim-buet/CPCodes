
#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int findtheright(vector<int>& carrydifference, int l, int r, int initialcarry) {
    //first occurance of change in carry difference ber kora lagbe
    int first = l, last = r;
    int ans = -1;
    int mid;
    // printf("here l = %d  r= %d  initial carry = %d\n", l, r, initialcarry);
    // cout << "The next carry diff are " << carrydifference[l + 1] << " " << carrydifference[l + 2] << " " << carrydifference[l + 3] << endl;
    while (first <= last) //<= 

    {
        mid = (first + last) / 2;

        if (carrydifference[mid] != initialcarry) {
            ans = mid;
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
    }

    return ans;



}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 5);
        vector<int> carrydifference(n + 5);
        carrydifference[1] = 0;
        cin >> arr[1];
        for (int i = 2;i <= n;i++) {
            cin >> arr[i];
            carrydifference[i] = carrydifference[i - 1] + abs(arr[i] - arr[i - 1]);
        }
        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (carrydifference[r] == carrydifference[l]) cout << "-1 -1" << endl;
            else {
                cout << l << " " << findtheright(carrydifference, l, r, carrydifference[l]) << endl;
            }

        }
        cout << endl;

    }
    return 0;
}
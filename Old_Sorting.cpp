#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    for (int T = 1;T <= t;T++) {
        int n;
        cin >> n;
        vi arr(n + 1);
        for (int i = 1;i <= n;i++) {
            cin >> arr[i];
        }
        int move = 0;
        for (int i = 1;i <= n;i++) {
            if (arr[i] != i) {
                auto it = find(arr.begin(), arr.end(), i);
                int ind = distance(arr.begin(), it);
                arr[ind] = arr[i];
                arr[i] = i;
                move++;

            }
        }
        cout << "Case " << T << ": " << move << endl;


    }
    return 0;
}
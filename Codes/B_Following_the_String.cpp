#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ch_freq[27] = { 0 };
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            for (int j = 1;j < 27;j++) {
                if (ch_freq[j] == arr[i]) {
                    cout << (char) (j + 'a' - 1);
                    ch_freq[j]++;
                    break;
                }
            }
        }
        cout << endl;




    }
    return 0;
}
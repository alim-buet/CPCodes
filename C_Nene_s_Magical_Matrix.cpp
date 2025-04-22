#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n][n];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                arr[i][j] = 0;
            }
        }
        long long maxsum = n * (n + 1) / 2;
        long long colmsum[n + 1];
        long long anssum = 0;
        int step = n;
        for (int i = 1;i <= n;i++) {
            if ((i * n) < maxsum) step++;
        }
        for(int c=1;c<=n;c++){
            if((c*n)<maxsum) anssum+=maxsum;
            else anssum+= (c*n);
        }
        cout << anssum << " " << step << endl;

        //column er index 1 theke start
        for (int i = 1;i <= n;i++) {
            //shob row e 1 2 3 ... ei permutation place kore dei.. operation type 1
            cout << 1 << " " << i << " ";
            for (int j = 1;j <= n;j++) {
                //permutation print
                cout << j << " ";
            }
            colmsum[i] = n * i;
            cout << endl;
        }
        //n ta operation e row borabor place kora holo
        for (int c = 1;c <= n;c++) {
            //operation type 2.. colm sum improve kora lagle korbo noyto continue.. break o kora jay but whatever
            if (colmsum[c] < maxsum) {
                cout << 2 << " " << c << " ";
                for (int i = 1;i <= n;i++) {
                    cout << i << " ";
                }
                cout << endl;
            }
            else break;

        }


    }
    return 0;
}
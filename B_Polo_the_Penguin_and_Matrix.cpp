#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int n, m, d;cin >> n >> m >> d;
    vector<vector<int>> matrix(n, vector<int>(m));
    vi arr(n * m);

    int ind = 0;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            int el;cin >> el;
            matrix[i][j] = el;
            arr[ind] = el;
            ind++;


        }
    }
    sort(arr.begin(), arr.end());

    cout << endl;
    int x = (n * m) / 2;
    int midel = arr[x];
    int isOk = 1;
    int step = 0;

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            if (abs(matrix[i][j] - midel) % d != 0) {
                isOk = 0;
                break;
            }
            else {
                step += (abs(matrix[i][j] - midel) / d);
            }
        }
    }
    if (isOk) cout << step << endl;
    else cout << -1 << endl;

    return 0;
}
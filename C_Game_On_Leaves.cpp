#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>

void solve() {
    int n, x;
    cin >> n >> x;
    // vector<vector<int>> graph(n + 1);
    int x_child = 0;
    for (int i = 0; i < n - 1;i++){
        int u, v;
        cin >> u >> v;
        if(u==x or v==x){
            x_child++;
        }

    }
    if(x_child<=1){
        cout << "Ayush" << endl;
    }
    else{
        int move = n - 3;
        if(move%2==1){
            cout << "Ayush" << endl;
        }
        else cout<<"Ashish"<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
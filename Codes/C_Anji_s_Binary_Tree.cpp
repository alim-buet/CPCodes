#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
void dfs(int parent, int child, int dir, string& path, vi& left_child, vi& right_child, vi& cost) {
    if (child == 0) return;
    //else
    if (dir == 0) {
        if (path[parent - 1] == 'L') {
            cost[child] = cost[parent];


        }
        else {

            cost[child] = cost[parent] + 1;
        }
    }
    else {
        if (path[parent - 1] == 'R') cost[child] = cost[parent];
        else cost[child] = cost[parent] + 1;
    }
    dfs(child, left_child[child], 0, path, left_child, right_child, cost);
    dfs(child, right_child[child], 1, path, left_child, right_child, cost);



}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        string path;cin >> path;
        vi left_child(n + 1), right_child(n + 1);
        //leftchild[i] gives the leftchild ind of ith node
        for (int i = 1;i <= n;i++) {
            cin >> left_child[i] >> right_child[i];
        }
        vi cost(n + 1, -1);
        cost[1] = 0;
        dfs(1, left_child[1], 0, path, left_child, right_child, cost);
        dfs(1, right_child[1], 1, path, left_child, right_child, cost);

        //0 is left and 1 is right
        int minans = INT_MAX;
        for (int i = 1;i <= n;i++) {
            if (left_child[i] == 0 and right_child[i] == 0) {
                minans = min(minans, cost[i]);
            }
        }
        cout << minans << endl;


    }
    return 0;
}
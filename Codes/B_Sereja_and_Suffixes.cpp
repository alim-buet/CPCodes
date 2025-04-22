#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    unordered_set<int> distinctSet;
    vector<int> distinctCount(n);

   
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    
    for (int i = n - 1; i >= 0; --i) {
        distinctSet.insert(a[i]); 
        distinctCount[i] = distinctSet.size(); 
    }

    // Answer queries
    for (int i = 0; i < m; ++i) {
        int l;
        cin >> l;
        cout << distinctCount[l - 1] << endl; 
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <numeric>
#include <limits>
#include <cstring>
#include <cassert>
#include <list>
#include <tuple>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define vl      vector<long long>
#define pii     pair<int, int>
#define pll     pair<long long, long long>
#define ll      long long
class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        vector<int> presum(n, 0);
        for(auto v:queries){
            int l = v[0];
            int r = v[1];
            presum[l]++;
            if(r<n-1){
                presum[r + 1]--;
            }
        }
        for (int i = 1; i < n;i++){
            presum[i] += presum[i - 1];
        }
        for (int i = 0; i < n;i++){
            if(nums[i]>presum[i])
                return false;
        }
        return true;
    }
};
void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    while (t--) {
        solve();
    }
    return 0;
}
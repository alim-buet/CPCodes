#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int maxSubArray(vector<int>& nums) {
    int maxsum = nums[0];
    int ithsum = nums[0];
    int n = nums.size();
    for (int i = 1;i < n;i++) {
        ithsum = max(ithsum + nums[i], nums[i]);
        maxsum = max(maxsum, ithsum);

    }
    return maxsum;

}
int main() {

}
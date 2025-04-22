class Solution {
public:
    int dp[100001][205]; //is it possible to make the target (raw) if we are in ith index(column) 

bool isPossible(vector<int>& nums,int ind,int target){
    //if(dp[target][ind]!=-1) return dp[target][ind];
    if(target==0) return true;
    if(target>= nums[ind]){
        return dp[target][ind] = (isPossible(nums, ind-1, target) | isPossible(nums, ind-1, target-nums[ind]));
    }
    if(target<nums[ind]){
        return dp[target][ind] = isPossible(nums, ind-1, int target);
    }
    
}

bool canPartition(vector<int>& nums) {
    memset(dp,-1,sizeof(dp));
    int ind = nums.size()-1;
    int total = 0;
    for(int i:nums){
        total+=i;
    }
    if(total%2) return false;
    if(isPossible(nums,ind,total/2)) return true;
    else return false;     
}
};
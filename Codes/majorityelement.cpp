// int majorityElement(vector<int>& nums) {
    // int n = nums.size();
    // int ans = 0;
    // for(int i =0;i<32;i++){
    //     int ones=0,zeros=0;
    //     for(int i=0;i<n;i++){
    //         if(((1<<i)& nums[i])) ones++;
    //         else zeros++;
    //     }
    //     if(ones>zeros){
    //         ans|=((1<<i));
    //     }
    // } 
    // return ans;
        
//}
//USING MOORE-VOTING ALGORITHM
int majorityElement(vector<int>& nums) {
    int candidate = nums[0];
    int count = 1;
    int n = nums.size();
    for(int i=1;i<n;i++){
        if(nums[i]==candidate){
            count++;

        }
        else{
            if(count==0){
                count = 1;
                candidate = nums[i];
            }
            else{
                count-=1;
            }
        }
    }
    return candidate;
}
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int global_sum = nums[0];
        int current_sum= nums[0];
        for(int i = 1;i<nums.size();i++){
            current_sum = max(nums[i],current_sum+nums[i] );
            global_sum = max(global_sum, current_sum);
        }
        return global_sum;
    }
};
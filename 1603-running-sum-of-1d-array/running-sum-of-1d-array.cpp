class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return {};
        }
        vector<int> running_sums(n);
        running_sums[0] = nums[0];
        for(int  i = 1; i<n;i++){
            running_sums [i] = running_sums[i-1] + nums[i];
        }
        return running_sums;
    }
};
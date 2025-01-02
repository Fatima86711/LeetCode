class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum ;
        vector<int>runningSum(nums.size(),0);
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<=i;j++){
                runningSum[i] = runningSum[i] + nums[j];
            }
        }
        return runningSum;
    }
};
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // vector<int>arr;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                    if(nums[i] == nums[j]&&i<j){
                        count++;
                    }
            }
        }
        return count;
    }
};
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int l = nums.size();
        vector<int> result(l);
        for(int i = 0;i<n;i++){
            result[2*i] = nums[i];
            result[2*i+1] = nums[i+n];
        }
        return result;
    }
};
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i= 0;i<nums.size();i++){
            int abs_val =  abs(nums[i]);
            int idx = abs_val-1;
            if(nums[idx]>0){
                nums[idx] = -1*nums[idx];
            }
            
        }
        vector<int>disappeared_nums;
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                disappeared_nums.push_back(i+1);
            }
        }
        return disappeared_nums;
    }
};
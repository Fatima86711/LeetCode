class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,i;
        for(i=1;i<nums.size();i++){
            if(nums[l]!=nums[i]){
                l++;
                nums[l]=nums[i];
            }
        }
        return l+1;
    }
};
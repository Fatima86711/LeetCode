class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastElementFoundAt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=0){
            nums[lastElementFoundAt++]= nums[i];
            }
        }
        for(int i = lastElementFoundAt;i<nums.size();i++){
            nums[i] = 0;
        }
    }

};

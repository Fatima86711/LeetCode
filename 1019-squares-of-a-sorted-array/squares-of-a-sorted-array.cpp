class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i  = 0;i<nums.size();i++){
            nums [i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        // for(int i = 0;i<nums.size();i++){
        //     for(int j = 0;j<nums.size()-i-1;j++){
        //         if(nums[j]>nums[j+1]){
        //             swap(nums[j], nums[j+1]);
        //         }
        //     }
        // }
        return nums;
    }

};
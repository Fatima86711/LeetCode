class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
     int uniqueIndex = 0;
        for(int i = 1;i< nums.size();i++){

                if(nums[uniqueIndex] != nums[i] ){
                    uniqueIndex++;
                    nums[uniqueIndex]= nums[i];
                
            }
        }
      
    return uniqueIndex+1;
    }
};
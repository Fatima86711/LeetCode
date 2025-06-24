class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() ==0 ){
            return {-1,-1};
        }else if((firstPosition(nums, target)) == -1 ){
            return {-1,-1};
        }
        else{
            return{firstPosition(nums,target), lastPosition(nums, target)};
        }
    }
    int firstPosition(vector<int>&nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int first = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target == nums[mid]){
                first = mid;
                high = mid-1;
            }
            else if(target >nums[mid]){
                low = mid+1;

        }
        else{
            high = mid-1;
        }
        }
        return first;
    }
      int lastPosition(vector<int>&nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int last = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target == nums[mid]){
                last = mid;
                low = mid+1;
            }
            else if(target >nums[mid]){
                low = mid+1;

        }
        else{
            high = mid-1;
        }
        }
        return last;
    }

};
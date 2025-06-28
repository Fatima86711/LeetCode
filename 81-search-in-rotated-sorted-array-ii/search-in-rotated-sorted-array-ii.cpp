class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int low = 0, high= n;
        while(low<=high){
            int mid= (low+high)/2;
            if(nums[mid]== target) return true;
            if(nums[low]==nums[mid]&& nums[mid]==nums[high]){
                high--;
                low++;
                continue;
            }
            else if(nums[low]<=nums[mid]){
                if(target>=nums[low]&& nums[mid]>=target){
                    high=mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else if(nums[mid]<=nums[high]){
                if( target>=nums[mid]&&target<=nums[high] ){
                    low = mid+1;
                }
                else{
                    high= mid-1;
                }
            }
        }
        return false;
    }
};
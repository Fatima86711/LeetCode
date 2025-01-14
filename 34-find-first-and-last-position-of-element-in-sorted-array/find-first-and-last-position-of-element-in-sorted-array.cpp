class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()){
            return {-1,-1};
        }
        if(firstPosition(nums, target)==-1){
            return {-1,-1};
        }
        else{
            return {firstPosition(nums, target),lastPosition(nums, target)};
        }
    }
    int firstPosition(vector<int>&arr, int target){
        int low = 0;
        int high = arr.size()-1;
        int first=-1;
        while(high>=low){
            int mid = (low+high)/2;
            if(arr[mid]==target){
                first = mid;
                high =mid-1;
            }
            else if(arr[mid]<target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return first;
    } 
     int lastPosition(vector<int>&arr, int target){
        int low = 0;
        int high = arr.size()-1;
        int last=-1;
        while(high>=low){
            int mid = (low+high)/2;
            if(arr[mid]==target){
                last = mid;
                low =mid+1;
            }
            else if(arr[mid]<target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return last;
    }
};
class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
       int  high = arr.size()-1;
        int low = 0;
        if(arr.size() == 0){
            return false;
        }
        while(low<=high){
            int mid = (low + high)/2;
            if(arr[mid]==target){
                return true;
            }

            if(arr[mid]==arr[low] && arr[mid]==arr[high]){
                high--;
                low++;
                continue;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<=target && arr[mid]>= target){
                    high = mid -1;
                }
                else{
                    low = mid +1;
                }
            }
            else{
                if(arr[high]>= target && arr[mid]<=target){
                    low = mid +1;

                }
                else{
                    high = mid -1;
                }
            }
        }
        return false;
    }
};
class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int mid;
        int ans = INT_MAX;
        while(low<=high){
             mid = (low + high)/2;
             if(arr[low]<= arr[mid]){
                ans = min(ans,arr[low]);
                low = mid + 1;
             }
             else{
                high = mid -1;
                ans = min(ans , arr[mid]);
                
             }

        }
        return ans;
    }
};

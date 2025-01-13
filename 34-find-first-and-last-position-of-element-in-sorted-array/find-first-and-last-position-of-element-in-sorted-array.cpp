class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb  = lowerBound(nums, target);
        if(lb==nums.size()||nums[lb]!=target){
            return {-1,-1};
        }
        return {lb, upperBound(nums, target)-1};
    }
    int lowerBound(vector<int>&arr, int target){
    int n = arr.size();
    int lower =0;
    int k=n;
    int mid;
    int upper = n-1;
    // int ans = n;
    while(lower<=upper){
         mid = (lower+upper)/2;
        if(arr[mid]>=target){
            k=mid;
            upper = mid - 1;
        }
        else{
            lower = mid +1;
        }

    }
    return k;
}
int upperBound(vector<int>&arr, int target){
    int n = arr.size();
    int lower =0;
    int k=n;
    int upper = n-1;
    int mid;
    // int ans = n;
    while(lower<=upper){
         mid = (lower+upper)/2;
        if(arr[mid]>target){
            k=mid;
            upper = mid - 1;
        }
        else{
            lower = mid +1;
        }

    }
    return k;
}
};
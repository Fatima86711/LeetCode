class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x(n);
        vector<int>y(n);
        int r = 0;
        for(int i =n; i<2*n;i++){
            y[r] = nums[i];
            r++;
        }
        for(int i = 0;i<n;i++){
            x[i]=nums[i];
        }
        r=0;
        int k =0;
        for(int i = 0;i<nums.size();i++){
            if(i%2!=0){
                nums[i] = y[r];
                r++;
            }
            else if(k<n){
                nums[i] = x[k];
            k++;
            }
        }
        return nums;
    }
};
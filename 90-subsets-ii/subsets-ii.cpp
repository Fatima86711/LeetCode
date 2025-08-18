class Solution {
public:
void subsets(int index,vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans){
    ans.push_back(ds);
   for (int i = index;i<nums.size();i++){

    if(i>index && nums[i]==nums[i-1]){
        continue;
    }
    ds.push_back(nums[i]);
    subsets(i + 1, ds,nums,ans);
    ds.pop_back();
   }

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        subsets(0,ds,nums, ans);
        return ans;
    }
};
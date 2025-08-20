class Solution {
public:
void recurPermute(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans, int* freq){
    if(nums.size()==ds.size()){
        ans.push_back(ds);
        return;
    }
    for(int i = 0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            recurPermute(nums,ds,ans,freq);
            ds.pop_back();
            freq[i]=0;
        }
    }
    return;
}
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> ds;
         int freq[nums.size()+1];
         for(int i = 0;i<nums.size();i++) freq[i]= 0;
         recurPermute(nums,ds,ans,freq);
        return ans;
    }
};
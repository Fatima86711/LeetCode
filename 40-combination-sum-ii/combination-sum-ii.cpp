class Solution {
public:
void findCombination(vector<int>&arr,int target,int index,vector<vector<int>>&ans,vector<int>&ds){
if(target == 0){
ans.push_back(ds);
return ;
}
for(int i = index;i<arr.size();i++){
    if(i>index && arr[i]==arr[i-1]){
        continue;
    }
    if(arr[i]>target){
        break;
    }
    ds.push_back(arr[i]);
    findCombination(arr,target-arr[i],i+1,ans,ds);
    ds.pop_back();
}

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {vector<vector<int>> ans;
    vector<int>ds;
    int index = 0;
    sort(candidates.begin(), candidates.end());
        findCombination(candidates,target,index,ans,ds);
        return ans;
    }
};
class Solution {
public:
    void util(vector<int>& nums, int index, vector<int>&curr,vector<vector<int>>&res ){
       
        if(index == nums.size()){
            //we print 
            res.push_back(curr);
           return;
        }
        //printed
        curr.push_back(nums[index]);
        //moving forward
        util(nums, index+1, curr, res);
        //pop from current array
        curr.pop_back();
        util(nums,index+1, curr, res);


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>curr;
        util( nums,  0, curr,res );
        return res;
    }
};
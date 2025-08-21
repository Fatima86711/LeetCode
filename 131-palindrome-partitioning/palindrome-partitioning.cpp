class Solution {
public:
    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
            return false;
        }
        return true;
    }
    void partition_util( int index,string s,vector<string>&ds,vector<vector<string>> &res ){
        if(index == s.size()){
            res.push_back(ds);
            return;
        }
        for(int i = index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                ds.push_back(s.substr(index,i-index + 1));
                partition_util(i+1,s,ds,res);
                ds.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ds;
        partition_util(0,s,ds,res);
        return res;
    }
};
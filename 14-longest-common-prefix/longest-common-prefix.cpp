class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";
        char ch;
        for(int i = 0;i<strs[0].length();i++){
             ch= strs[0][i];
            bool match = true;
            for(int j=1;j<n;j++){
                
                if(strs[j].size()<i || strs[j][i] != ch ){
                    match = false;
                    break;
                }
            }
            if(match ==false){
                break;
            }
            else{
                ans.push_back(ch);
            }
          
        }
          return ans;
    }
};
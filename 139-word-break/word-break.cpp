class Solution {
   
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if(s.empty()){
            return true;
        }
        vector<bool>tb(s.size()+1,false);
        tb[0] = true;
    unordered_set <string> dict;
        dict.insert(wordDict.begin(), wordDict.end());
        for(int i = 1;i<=s.size();i++){
            for(int j = 0;j<i;j++){
                
                if(tb[j]){
                    string sub = s.substr(j,i-j);
                    if(dict.count(sub)){
                        tb[i]= true;
                        break;
                    }
                }
            }
        }
        return tb[s.size()];
    }
};
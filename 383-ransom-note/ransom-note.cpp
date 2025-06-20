class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> chars(26,0);
        for(char n : magazine){
            chars[n-'a']++;
        }
        for(char ch: ransomNote){
            if(chars[ch - 'a'] == 0){
                return false;
            }
            chars[ch-'a']--;
        }
        return true;
    }
};
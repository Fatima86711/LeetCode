class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length();
        int word = 0,chars = 0;
        int i ;
        for( i = l-1;i>=0 &&s[i] ==' ';i-- ){
            
        }
        while( i >=0 && s[i] != ' '){
            chars++;
            i--;
        }
        return chars;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int l=0;
        int counter=0;
        for(int i=0;i<size;i++){
            if(isalnum(s[i])){
                s[counter++]= tolower(s[i]);
            }
        }
int right= counter-1 ;
int left= 0;
        while(right>left){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
         return true;
    }
    
};
class Solution {
public:
    bool isPalindrome(string s) {
        string characters = "";
        for(char c : s){
            if(isalnum(c)){    //check for alpha numeric characters
                characters+= tolower(c);
        }
    }
    int left = 0;
    int right = characters.size()-1;
    while(left<right){
        if(characters[left]!=characters[right]){
           return false;
        }
        left++;
        right--;
    }
    return true;
    }

    
};
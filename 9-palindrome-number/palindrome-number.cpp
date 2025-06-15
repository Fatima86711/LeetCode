class Solution {
public:
    bool isPalindrome(int x) {
        int reverse=0;
        int digit;
        int num = x;
        if(x<0){
            return false;
        }
        while(x!=0){
            digit= x%10;
            if((reverse <INT_MIN/10)|| (reverse>INT_MAX/10))
            return false;
            reverse= reverse*10 + digit;
            x=x/10;
        }
        if(reverse==num){
            return true;
        }
        else {
            return false;
        }

    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        int number = x;
        int reverse = 0;
        int lastDigit ;
        if(number <0){
            return false;
        }
        while(x!=0){
            lastDigit = x%10;
            if(reverse >INT_MAX/10 ||(reverse == INT_MAX/10 && lastDigit>7 ) ) return false;
            if(reverse<INT_MIN/10 || (reverse == INT_MIN/10 &&lastDigit<-8)) return false;
            reverse = (reverse*10)+lastDigit;
            x = x/10;
        }
        if(reverse == number){
            return true;
        }
        else return false;
    }
};
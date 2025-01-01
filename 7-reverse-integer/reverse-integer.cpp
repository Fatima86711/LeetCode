class Solution {
public:
    int reverse(int x) {
        int lastDigit;
        int reverseNumber = 0;
        while(x!=0){
            lastDigit = x%10;
            if (reverseNumber > INT_MAX / 10 || (reverseNumber == INT_MAX / 10 && lastDigit > 7)) return 0;
if (reverseNumber < INT_MIN / 10 || (reverseNumber == INT_MIN / 10 && lastDigit < -8)) return 0;

            reverseNumber = reverseNumber*10 + lastDigit;
            x=x/10;
        }
        return reverseNumber;
    }
};
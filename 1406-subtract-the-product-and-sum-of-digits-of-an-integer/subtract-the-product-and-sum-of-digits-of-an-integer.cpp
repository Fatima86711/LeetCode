class Solution {
public:
    int subtractProductAndSum(int n) {
        int remainder;
        int product = 1;
        int sum = 0;
        while(n){
            remainder = n%10;
            product = product * remainder;
            sum = sum+remainder;
            n= n/10;
        }
        return product -sum;
    }
};
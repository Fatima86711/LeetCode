class Solution {
public:
    double myPow(double base, int exponent) {
        long long power = exponent;
        double res =1.0;
        if(power == 0){
            return 1.0;
        }
        if(power<0)
        power = -power;
        while(power>0){
            if(power%2==1){
                res = res*base;
                power = power -1;
               
            }
           else {
             base = base * base;
                power = power/2;
           }
               
        }
        if(exponent<0){
            res = 1/res;
        }
        return res;
    }
};
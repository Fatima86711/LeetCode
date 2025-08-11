class Solution {
public:
    double myPow(double base, int exponent) {
        long long power = exponent ;
        if(power==0 ){
            return 1.0;
        }
        double res = 1.0;
        if(power<0){
            base = 1/base;
            power = -power;
        }
        while(power >0){
            if(power%2==1){
                res = res* base;
            }
            base = base * base;
            power = power/2;
        }
        return res;
    }
};
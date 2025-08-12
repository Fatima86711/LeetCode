class Solution {
public:
 long long MOD = 1e9 + 7;
 long long power ( long long base, long long pow){
    long long res = 1;
    long long exp = pow;
    while(exp>0){
        if(exp & 1){
            res = (res * base )%MOD;
        }
        base = (base * base)%MOD;
    exp = exp>>1;
    }
    return res;
 }
    int countGoodNumbers(long long n) {
        long long even =(power(5, (n+1)/2))%MOD;
        long long odd = ((power(4, (n/2)))%MOD);
        long long res = (odd* even)%MOD;
        return static_cast<int>(res);
    }
};
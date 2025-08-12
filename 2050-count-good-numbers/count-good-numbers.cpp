class Solution {
public:
long long MOD = 1e9 + 7;
long long power(long long base ,long long exp ){
long long res = 1 ;
base =  base % MOD;
while(exp>0){

    if(exp&1){//if exp is odd
    res =( res * base) %MOD;
    }
   base = (base * base)%MOD;

    exp = exp>>1;
    
}
return res;
}
    int countGoodNumbers(long long n) {
       long long odd = (power(4,(n)/2));
       long long even  = (power(5,(n+1)/2));
     long long res =( even * odd)%MOD ;
     return static_cast<int>(res);
    }
};
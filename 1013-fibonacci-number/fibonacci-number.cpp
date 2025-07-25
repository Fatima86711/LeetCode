class Solution {
public:
long long fibonacci(int n , vector<long long>&memo ){
    if(memo[n]!=-1){
        return memo[n];
    }
    if(n<=1){
        return n;
    }
    memo[n]= fibonacci(n-1, memo) + fibonacci(n-2, memo);
    return memo[n];

}
    int fib(int n) {
        vector<long long> memo(n+1, -1);
return fibonacci(n, memo);
    }
};
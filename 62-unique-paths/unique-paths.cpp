class Solution {
public:
long long uniquePathsUtil(int m, int n, vector<vector<long long>> &memo ){
    if(m==1|| n==1 ){
        return 1;
    }
    if(memo[m][n]==0)
    memo[m][n] = uniquePathsUtil(m-1,n, memo) + uniquePathsUtil(m,n-1, memo);
    return memo[m][n];
}
    int uniquePaths(int m, int n) {
      vector<vector<long long>> memo(m+1, vector<long long>( n+1,0));


    return uniquePathsUtil(m,n, memo);
    }
};
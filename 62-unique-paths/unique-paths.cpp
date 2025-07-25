class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<long long>> tabulation (m, vector<long long>(n, -1));
        for(int i = 0;i<n;i++){
        tabulation[0][i] = 1;
        }
        for(int i = 0;i<m;i++){
        tabulation[i][0]=1;
        }
        for(int i =1;i<m;i++){
            for(int k = 1;k<n;k++){
                tabulation[i][k] = tabulation[i-1][k] + tabulation[i][k-1];
            }
        }
        return tabulation[m-1][n-1];
    }
};
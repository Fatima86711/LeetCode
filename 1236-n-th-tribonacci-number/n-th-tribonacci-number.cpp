class Solution {
public:

    int tribonacci(int n) {
        vector<long> tabulation(40,0);
        tabulation[0] = 0;
        tabulation[1] = 1;
        tabulation[2] = 1;
        for(int i = 3;i<=n;i++){
            tabulation[i] = tabulation[i-1] + tabulation[i-2] + tabulation[i-3];
        }
        long ans =  tabulation[n];
        return ans;
      }
};
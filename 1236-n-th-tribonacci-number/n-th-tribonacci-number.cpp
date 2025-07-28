class Solution {
public:

    int tribonacci(int n) {
        vector<long> tabulation(n+1,0);
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
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
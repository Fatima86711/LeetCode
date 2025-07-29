class Solution {
public:
    int climbStairs(int n) {
        vector <int> tabulation(n+1,0);
        tabulation[1] = 1;
        if(n==1){
        
        return tabulation[1];
        }
        
        tabulation[2] = 2;
        if(n==2){
        return tabulation[2];
        }
        for(int i =3;i<=n;i++ ){
            tabulation[i] = tabulation[i-1] + tabulation[i-2];
        }
        return tabulation[n];
    }
};
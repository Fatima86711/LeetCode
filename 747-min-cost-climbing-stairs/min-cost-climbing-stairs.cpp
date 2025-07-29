class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>tabulation(cost.size());
        
        tabulation[0]=cost[0];
        if(cost.size()==1){
            return tabulation[0];
        }
        tabulation[1]=cost[1];
        for(int i = 2 ;i<cost.size();i++){
            tabulation[i] = cost[i] + min(tabulation[i-1],tabulation[i-2]);
        }
        return min(tabulation[cost.size()-1],tabulation[cost.size()-2]);
    }
};
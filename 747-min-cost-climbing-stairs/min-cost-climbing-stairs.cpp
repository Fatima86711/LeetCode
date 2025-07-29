class Solution {
public:
    int minCost(vector<int>&cost,int currentIndex, vector<int>&memo){
        if(currentIndex>=cost.size()){
            return 0;
        }
        if(memo[currentIndex]!=-1){
            return memo[currentIndex];
        }
        memo[currentIndex]=cost[currentIndex] + min(minCost(cost,currentIndex+1, memo),minCost(cost,currentIndex+2,memo));
        return memo[currentIndex];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> memo(cost.size()+2,-1);
     return min( minCost(cost,0,memo),  minCost(cost,1,memo));
    }
};
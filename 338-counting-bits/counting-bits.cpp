class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        
        for(int i =0 ;i<=n;i++){
             int num = i;
            int r=0;
            while(num){
                r+= num%2;
                num=num/2;
            }
            ans[i]=r;
        }
        return ans;
    }
};
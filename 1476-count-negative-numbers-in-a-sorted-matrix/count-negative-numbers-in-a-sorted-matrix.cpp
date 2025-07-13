class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int rows = grid.size();
       int cols = grid[0].size();
       int c = 0;
       int r= rows-1;
       int count = 0;
       if(rows==0){
        return 0;
       }
       while(r>=0 && c<cols ){
        if(grid[r][c]<0){
            count = count + (cols-c);
            r--;
        }
        else
        {
            c++;
        }

       }
       return count;
    }
};
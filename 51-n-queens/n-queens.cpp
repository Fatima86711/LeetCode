class Solution {
public:
    bool isSafe(int col, int  row, vector<string>& board, int n) {
        int duprow = row;
        int dupcol = col;
        //for upper left diagnol
        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q') {
                return false;
            }
            row--;
            col--;
        }
        row = duprow;
        col = dupcol;
        //for horizontal left row
        while (col >= 0) {
            if (board[row][col] == 'Q') {
                return false;
            }
            col--;
        }
        col = dupcol;
        // for lower left diagnol
        while(row<n && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row ++;
            col--;
        }
        row  = duprow;
        col = dupcol;
        return true;
    }
    void solve(int col, vector<vector<string>>& ans,
               vector<string>& board, int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row< n; row++) {
            if (isSafe(col, row, board, n)) {
                board[row][col]='Q';
                solve(col + 1,  ans, board, n);
                board[row][col] = '.';
            }
        }
        return;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
           board[i] = s;
        }
        solve(0,  ans, board, n);
         return ans;
    }
   
};
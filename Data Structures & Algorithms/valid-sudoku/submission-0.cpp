class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char dig) {

        // Check row
        for(int i = 0; i < 9; i++) {
            if(i != col && board[row][i] == dig)
                return false;
        }

        // Check column
        for(int j = 0; j < 9; j++) {
            if(j != row && board[j][col] == dig)
                return false;
        }

        // Check 3x3 box
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;

        for(int i = srow; i <= srow + 2; i++) {
            for(int j = scol; j <= scol + 2; j++) {
                if((i != row || j != col) && board[i][j] == dig)
                    return false;
            }
        }

        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col] != '.'){
                    char dig = board[row][col];

                    if(!isSafe(board,row,col,dig))
                        return false;
                }
            }
        }
        return true;
    }
};

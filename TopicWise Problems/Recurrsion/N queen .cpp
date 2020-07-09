class Solution {
public:
    vector<string> board;
    
    void createBoard(int n){
        for(int j=0;j<n;j++){
            string s(1,'.');
            for(int i=1;i<n;i++){
                s+='.';
            }
            board.push_back(s);
        }
    }
    
    bool isPossible(int row,int coloumn,int n){
        
        //coloumn check
        for(int i=0;i<row;i++){
            if(board[i][coloumn]=='Q') return false;
        }
        
        //upper left diagonal check
        for(int i=row-1,j=coloumn-1;i>=0&&j>=0;i--,j--){
            if((board[i][j])=='Q') return false;
        }
        //upper right diagonal check
        for(int i=row-1,j=coloumn+1;i>=0&&j<n;i--,j++){
            if((board[i][j])=='Q') return false;
        }
        
        return true;
    }
    void nQueens(int row,int n,vector<vector<string> > &result){
        if(row==n){
            result.push_back(board);
        }
        for(int j=0;j<n;j++){
            if(isPossible(row,j,n)){
                board[row][j]='Q';
                nQueens(row+1,n,result);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        createBoard(n);
        vector<vector<string> > result;
        nQueens(0,n,result);
        return result;
    }
};
   
    void solve(int col,int n,vector<string> board,vector<vector<string>>& ans,vector<int>lowerdiagonal,vector<int> upperdiagonal ,vector<int> leftrow) 
    {
        if(col>=n)
        {
            ans.push_back(board);
             return;
        }

            for(int row=0;row<n;row++)
            {if(leftrow[row]==0 && upperdiagonal[row+col]==0 && lowerdiagonal[n-1+col-row]==0)
            {
                leftrow[row]=1;
                upperdiagonal[row+col]=1;
                lowerdiagonal[n-1+col-row]=1;
                board[row][col]='Q';
               solve(col+1,n,board,ans,lowerdiagonal,upperdiagonal,leftrow);
                leftrow[row]=0;
                upperdiagonal[row+col]=0;
                lowerdiagonal[n-1+col-row]=0;
                board[row][col]='.';
            }
        }

    }
    vector<vector<string>> NQueens(int n) {
       
      string s(n,'.');
      vector<vector<string>> ans;
      vector<string> board(n,s);
      vector<int> lowerdiagonal(2*n-1,0);
      vector<int> upperdiagonal(2*n-1,0);
      vector<int> leftrow(n, 0);
      solve(0,n,board,ans,lowerdiagonal,upperdiagonal,leftrow);
      return ans;
    }

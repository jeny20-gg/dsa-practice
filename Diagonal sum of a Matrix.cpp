\\ PROBLEM : Diagonal sum of a Matrix
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Basic


class Solution {
  public:
    int diagonalSum(vector<vector<int> >& mat) {
        // Code here
        int n=mat.size();
        int sum=0;
        for(int i = 0; i < n; i++) {
            sum += mat[i][i];        // primary diagonal
             sum += mat[i][n-1-i];    // secondary diagonal
        }
        return sum;
    }
};
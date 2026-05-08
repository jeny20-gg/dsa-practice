\\ PROBLEM : Determinant of Matrix
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Medium




class Solution {
  public:
    // Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int> > matrix, int n) {
        // code here
        if(n==1) return matrix[0][0];
        int det=0;
        for(int j=0;j<n;j++){
            vector<vector<int>> submatrix;
            for(int row=1;row<n;row++){
                vector<int> temp;
                for(int col=0;col<n;col++){
                    if(col!=j){
                        temp.push_back(matrix[row][col]);
                    }
                }
                submatrix.push_back(temp);
            }
            int sign=(j%2==0) ? 1 : -1;
            det += sign*matrix[0][j] * determinantOfMatrix(submatrix,n-1);
        }
        return det;
    }
};
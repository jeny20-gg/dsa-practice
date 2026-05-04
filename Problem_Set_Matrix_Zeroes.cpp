//Problem: Set Matrix in Zeroes
//Platform: GeeksforGeeks
//Difficulty: Medium

class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int r=mat.size();
        int c=mat[0].size();
        bool zerorow[r]={false};
        bool zerocolumn[c]={false};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0){
                    zerorow[i]={true};
                    zerocolumn[j]={true};
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if (zerorow[i]||zerocolumn[j]){
                    mat[i][j]=0;
                }
            }
        }
    }
};
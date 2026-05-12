\\ PROBLEM : Rotate by 90 degree
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Medium


class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
        for(int i=0;i<n/2;i++){
            swap(mat[i],mat[n-1-i]);
        }
    }
};

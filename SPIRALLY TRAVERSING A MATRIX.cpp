// PROBLEM NAME: SPIRALLY TRAVERSING A MATRIX
// PLATFORM: GEEKSFORGEEKS
// DIFFICULTY : MEDIUM


class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int r=mat.size();
        int c=mat[0].size();
        vector<int> ans;
        int top=0,bottom=r-1,left=0,right=c-1;
        while(top <= bottom && left <= right) {
            for(int j=left;j<=right;j++){
                ans.push_back(mat[top][j]);
            }
            for(int i=top+1;i<=bottom;i++){
                ans.push_back(mat[i][right]);
            }
            if(top!=bottom){
            for(int j=right-1;j>=left;j--){
                ans.push_back(mat[bottom][j]);
            }
            }
            if(left!=right){
            for(int i=bottom-1;i>=top+1;i--){
                ans.push_back(mat[i][left]);
            }
            }
             top++,bottom--,left++,right--;
        }
       
        return ans;
    }
};
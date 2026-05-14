PROBLEM : Median in row wise sorted matrix
PLATFORM : GeeksforGeeks
DIFFICULTY : Medium



class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int r=mat.size();
        int c=mat[0].size();
        vector<int> ans;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans.push_back(mat[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
            return ans[r*c/2];
    }
};

\\ PROBLEM : Difference Array
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Medium



class Solution {
  public:
    vector<int> diffArray(vector<int>& arr, vector<vector<int>>& opr) {
        // code here
        int n=arr.size();
        int q=opr.size();
        vector<int> diff(n+1,0);
        for(int i=0;i<q;i++) {
            int left=opr[i][0];
            int right=opr[i][1];
            int value=opr[i][2];
            diff[left] += value;
            if(right+1 < n) diff[right+1] -= value;
        }
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += diff[i];
            arr[i] += sum;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
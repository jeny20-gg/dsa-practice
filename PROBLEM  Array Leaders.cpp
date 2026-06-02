\\PROBLEM : Array Leaders
\\PLATFORM : GeeksforGeeks
\\DIFFICULTLY : Easy



class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>res;
        int max=arr[n-1];
        res.push_back(max);
        for(int i=n-2;i>=0;i--) {
            if(arr[i]>=max) {
                res.push_back(arr[i]);
                max=arr[i];
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
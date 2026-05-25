PROBLEM : Subarray with 0 sum
PLATFORM : GeeksforGeeks 
DIFFICULTY : Medium


class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        unordered_set<int> ans;
        ans.insert(0);
        int prefix=0;
        for(int x:arr){
            prefix+=x;
            if(ans.count(prefix))
               return true;
            ans.insert(prefix);
        }
        return false;
    }
};
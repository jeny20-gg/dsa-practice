\\ PROBLEM : Indexes of Subarray Sum
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Medium


class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        vector<int> ans;
        int left =0,sum=0;
        for(int right=0;right<n;right++){
            sum+=arr[right];
            while(sum > target) {
                sum -= arr[left]; 
                left++;
            }
            if(sum == target){
               return {left + 1, right + 1};
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
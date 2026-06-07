// PROBLEM : Sum All Array Elements
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Easy


class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
};
// PROBLEM : Kth smallest 
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Medium



class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
            return arr[k-1];
    }
};
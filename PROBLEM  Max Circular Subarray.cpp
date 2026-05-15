PROBLEM : Max Circular Subarray
PLATFORM : GeeksforGeeks
DIFFICULTY : Hard



class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        int totalsum=0;
        int currmax=0,maxsum=arr[0];
        int currmin=0,minsum=arr[0];
        for(int i=0;i<n;i++) {
            currmax=max(arr[i],currmax+arr[i]);
            maxsum=max(currmax,maxsum);
            currmin=min(arr[i],currmin+arr[i]);
            minsum=min(currmin,minsum);
            totalsum+=arr[i];
        }
        if(maxsum<0) return maxsum;
        return max(maxsum,totalsum-minsum);
    }
};
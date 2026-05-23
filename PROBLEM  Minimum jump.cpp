\\ PROBLEM : Minimum jump
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Medium



class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int jump=0;
        int farthest=0;
        int end=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++) {
            farthest=max(farthest,i+arr[i]);
            if(i==end){
                jump++;
                end=farthest;
                if(end>=n-1) {
                    return jump;
                }
            }
        }
        return -1;
    }
};


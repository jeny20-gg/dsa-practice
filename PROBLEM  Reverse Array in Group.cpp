// PROBLEM : Reverse Array in Group 
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Medium




class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i+=k) {
            if(i+k<=n){
                reverse(arr.begin() +i,arr.begin()+i+k);
            } else {
                reverse(arr.begin()+i,arr.end());
            }
        }
    }
};

// PROBLEM : Missing And Repeating
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Easy

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int repeat=-1;
        int missing=-1;
        for(int i=1;i<n;i++) {
            if(arr[i]==arr[i-1]){
                repeat=arr[i];
            }
            if((arr[i]-arr[i-1])>1) {
                missing=(arr[i-1]+1);
            }
            if(arr[0]!=1){
                missing=1;
            }
            else if(arr[n-1]!=n){
                missing=n;
            }
        }
        ans.push_back(repeat);
        ans.push_back(missing);
        return ans;
    }
};

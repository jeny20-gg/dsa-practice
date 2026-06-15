// PROBLEM : Min element in Array 
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Easy


class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n=arr.size();
        int minval=arr[0],maxval=arr[0];
        
        for (int i=1;i<n;i++)
        {
            if (arr[i]<minval) minval=arr[i];
            if (arr[i]>maxval) maxval=arr[i];        
            
        }
        return {minval, maxval};
    }
};
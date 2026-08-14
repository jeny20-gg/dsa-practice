// PROBLEM : Missing in Array
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Easy


class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n=arr.size()+1;
        int x=0;
        for (int i=1;i<=n;++i) x^=i;
        for(int v:arr)x^=v;
        return x;
        
    }
};
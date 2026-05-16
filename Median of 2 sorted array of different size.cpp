PROBLEM : Median of 2 sorted array of different size
PLATFORM : GeeksforGeeks
DIFFICULTY : Hard


class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> temp;
        int i = 0, j = 0;
        while(i < a.size() && j < b.size()) {
            if(a[i] <= b[j])
            temp.push_back(a[i++]);
        else
            temp.push_back(b[j++]);
        }
        while(i < a.size()) temp.push_back(a[i++]);
        while(j < b.size()) temp.push_back(b[j++]);
        int n = temp.size();
        if(n % 2 == 1)
        return temp[n/2];
        else
        return (temp[n/2 - 1] + temp[n/2]) / 2.0;
    }
};
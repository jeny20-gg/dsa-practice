// PROBLEM : Reverse the String
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Basic




class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int start = 0;
        int end = s.length() - 1;
        while (start < end) {
            int temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        return s;
    }
};

// PROBLEM : Power of 2 
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Easy



class Solution {
  public:
    bool isPowerofTwo(int n) {
        return (n>0) && ((n&(n-1))==0);
    }
};
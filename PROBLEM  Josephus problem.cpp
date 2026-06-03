\\PROBLEM : Josephus problem
\\PLATFORM : GeeksforGeeks
\\DIFFICULTLY : Easy


class Solution {
  public:
    int josephus(int n, int k) {
        // code here
        if(n==1) {
            return 1;
        }
        else {
            return(josephus(n-1,k)+k-1)%n+1;
        }
    }
};
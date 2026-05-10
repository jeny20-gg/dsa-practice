\\ PROBLEM : Tower of Hanoi
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Medium



class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n==1) {
            return 1;
        }
        int moves1=towerOfHanoi(n-1,from,aux,to);
        int moves2=towerOfHanoi(n-1,to,from,aux);
        return moves1+1+moves2;
    }
};
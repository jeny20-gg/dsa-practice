// PROBLEM : First 50 positive numbers
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy



class Solution {
    public:
    int whileLoop(int d) {
        // Your code goes here  
        int start=(d==0) ?10:d;
        int sum=0;
        int count=0;
        int num=start;
        while(count < 50) {
            sum+=num;
            num+=10;
            count++;
        }
        return sum;
    }
};
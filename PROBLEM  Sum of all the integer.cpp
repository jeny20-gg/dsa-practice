// PROBLEM : Sum of all the integer
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy


class Solution {
public:
    int forLoop(int low, int high) {
        // Your code goes here
        int sum=0;
        for (int i=low;i<=high;i++){
            sum+=i;
        }
        return sum;
    }
};
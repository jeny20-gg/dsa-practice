// PROBLEM : Add Digits
// PLATFORM : Leetcode
// DIFFICULTLY : Easy



class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;

            // inner loop: sum up the digits of num
            while (num != 0) {
                int digit = num % 10;  // peel off last digit
                sum += digit;           // add it to running total
                num = num / 10;         // shrink num
            }

            num = sum;  // replace num with the digit sum, then check outer loop again
        }

        return num;  //once num < 10, it's a single digit — return it
    }
};
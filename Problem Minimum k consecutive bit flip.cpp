//Problem: Minimum k consecutive bit flip
//Platform: GeeksforGeeks
//Difficulty: Hard




class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int flip=0;
        int currentflip=0;
        int isflipped[n]={0};
        for(int i=0;i<n;i++){
            if(i>=k && isflipped[i-k]==1){
                currentflip--;
            }
            if(arr[i] % 2==currentflip%2){
                if(i+k>n) return -1;
                flip++;
                currentflip++;
                isflipped[i]=1;
            }
        }
        return flip;
    }
};
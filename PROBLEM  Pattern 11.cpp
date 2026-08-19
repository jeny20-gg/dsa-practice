// PROBLEM : Pattern 11
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy



class Solution {
public:
    void pattern11(int n) {
        for (int i=0;i<n;i++) {
            int start=1;
            if(i%2==0) start=1;
            else start=0;
            for(int j=0;j<=i;j++){
                cout<<start;
                start=1-start;
            }
            cout<<endl;
        }
    }
};
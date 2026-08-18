// PROBLEM : Pattern 8
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy




class Solution {
public:
    void pattern8(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<2n-(2*i+1);j++){
                cout<<"*";
            }
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
};
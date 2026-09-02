// PROBLEM : Pattern 18
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy




class Solution {
public:
    void pattern18(int n) {
        for(int i=0;i<n;i++){
            for(char ch='D'-i;ch<='D';ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
};
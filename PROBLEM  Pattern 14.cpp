// PROBLEM : Pattern 14
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy




class Solution {
public:
    void pattern14(int n) {
        for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+i;ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
};
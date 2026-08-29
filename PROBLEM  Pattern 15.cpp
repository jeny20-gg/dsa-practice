// PROBLEM : Pattern 15
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy





class Solution {
public:
    void pattern15(int n) {
        for(int i=0;i<n;i++){
            for(char ch='A';ch='A'+(n-i-1);ch++){
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
};
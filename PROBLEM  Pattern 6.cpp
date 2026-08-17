// PROBLEM : Pattern 6
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy



class Solution {
public:
    void pattern6(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
};
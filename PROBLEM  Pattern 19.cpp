// PROBLEM : Pattern 19
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy



class Solution {
public:
    void pattern19(int n) {
        for(int i=0;i<n;i++){
            //star
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            //space 
            for(int j=1;j<=i*2;j++){
                cout<<" ";
            }
            //star
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        int inis=2*n-2;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=0;j<inis;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            inis-=2;
            cout<<endl;
        }
    }
};
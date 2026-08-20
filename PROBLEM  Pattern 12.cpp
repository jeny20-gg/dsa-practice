// PROBLEM : Pattern 12
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy




class Solution {
public:
    void pattern12(int n) {
        int space=2*(n-1);
        for(int i=1;i<=n;i++){
            //number
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            //space
            for(int j=1;j<=space;j++){
                cout<<" ";
            }
            //number this time in reverse so the code would be 
            for(int j=i;j>=1;j--){
                cout<<j;
        }
        cout<<endl;
        space=space-2;
    }
};
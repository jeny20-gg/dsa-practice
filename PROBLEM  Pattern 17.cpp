// PROBLEM : Pattern 17
// PLATFORM : Striver (take you forward)
// DIFFICULTLY : Easy




class Solution {
public:
    void pattern17(int n) {
        for (int i=0;i<n;i++){
            // for space 
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            // for char 
            char ch='A';
            int breakpoint = (2*i+1)/2;
            for(int j=1;j<=2*i+1;j++){
                cout<<ch;
                if(j<=breakpoint) ch++;
                else ch--;
            }
            cout<<endl;
        }
    }
};
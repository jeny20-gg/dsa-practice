\\ PROBLEM : Previous Greater Element
\\ PLATFORM : GeeksforGeeks
\\ DIFFICULTY : Medium


class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        stack<int> st;
        vector<int> ans;
        for (int x:arr) {
            while (!st.empty() && st.top() <=x) {
                st.pop();
            }
            if (st.empty ()) {
                ans.push_back(-1);
            }else{
                ans.push_back(st.top());
            }
            st.push(x);
        }
        return ans;
    }
};
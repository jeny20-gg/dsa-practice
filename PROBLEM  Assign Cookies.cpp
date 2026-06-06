\\PROBLEM : Assign Cookies
\\PLATFORM : GeeksforGeeks
\\DIFFICULTLY : Medium


class Solution {
    public int maxChildren(int[] greed, int[] cookie) {
        // code here
        int n=greed.length;
        int m=cookie.length;
        int ans=0;
        Arrays.sort(greed);
        Arrays.sort(cookie);
        int i=n-1,j=m-1;
        while (i>=0 && j>=0) {
            if(cookie[j]>=greed[i]) {
                ans++;
                j--;
            }
            i--;
        }
        return ans;
    }
}
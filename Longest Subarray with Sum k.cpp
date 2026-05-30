\\PROBLEM : Longest Subarray with Sum K

\\PLATFORM : GeeksforGeeks
\\DIFFICULTLY : Medium





class Solution {
	public:
	int longestSubarray(vector<int>& arr, int k) {
		// code here
		int n = arr.size();
		unordered_map<int, int>sum;
		int prefix = 0;
		int maxlengt0 = 0;
		sum[0] = -1;
		for (int i = 0; i<n; i++) {
			prefix += arr[i];
			if(sum.count(prefix - k)){
                maxlengt0 = max(maxlengt0, i - sum[prefix - k]);
            }
            if(!sum.count(prefix)){   // only if NOT already there
                sum[prefix] = i;
            }
		}
		return maxlengt0;
	}
};

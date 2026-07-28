// PROBLEM : Count Subsets with Sum
// PLATFORM : GeeksforGeeks
// DIFFICULTLY : Medium


class Solution {
	public:
	vector<vector<int>> dp;
	int helper(int i, int target, vector<int>& arr) {
		if (i == arr.size()) {
			if (target == 0)
				return 1;
			else {
				return 0;
			}
		}
		if(dp[i][target] != -1) return dp[i][target];
		int notTake=helper(i+1,target,arr);
		int take=0;
		if(arr[i]<=target){
		    take = helper(i + 1, target - arr[i], arr);
		}
		dp[i][target] = notTake + take;
            return dp[i][target];
	}
	int perfectSum(vector<int>& arr, int target) {
		// code here
		int n = arr.size();
        dp.assign(n + 1, vector<int>(target + 1, -1));
        return helper(0, target, arr);
	}
};


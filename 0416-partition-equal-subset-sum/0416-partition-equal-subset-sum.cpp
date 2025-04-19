class Solution {
public:
bool isSubsetSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

        // ✅ Base Case: A subset with sum 0 is always possible
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }

        // ✅ 0/1 Knapsack DP Table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= target; j++) {
                if (arr[i - 1] <= j) {  
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][target];
    }
    bool canPartition(vector<int>& nums) {
      int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0) return false; // If sum is odd, partition is impossible
        return isSubsetSum(nums, sum / 2);



    }
};
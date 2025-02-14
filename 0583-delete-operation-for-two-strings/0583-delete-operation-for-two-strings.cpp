class Solution {
public:
    int minDistance(string w1, string w2) {
         
         
              int m = w1.length();
        int n = w2.length();
        
        // DP table to store lengths of common substrings
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        int maxLength = 0;

        // Build the DP table for longest common substring
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                // Check if characters match
                if (w1[i - 1] == w2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;  // Extend the common substring
                    maxLength = max(maxLength, dp[i][j]);  // Update maxLength
                } else {
                    dp[i][j] = 0;  // Reset if characters don't match
                }
            }
        }

        // Minimum deletions required: Total length minus twice the longest common substring length
        return (m + n - 2 * maxLength);
    }
};
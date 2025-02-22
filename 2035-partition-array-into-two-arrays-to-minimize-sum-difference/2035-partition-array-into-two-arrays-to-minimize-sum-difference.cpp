class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 2;
        int total = accumulate(nums.begin(), nums.end(), 0);
        
        // Generate all possible subset sums for the first half
        vector<unordered_map<int, int>> first_half(n + 1);  // [count] -> {sum -> frequency}
        first_half[0][0] = 1;  // Base case: 0 elements with sum 0
        
        // DP for first half
        for (int i = 0; i < n; i++) {
            auto curr = first_half;
            for (int count = 0; count < n; count++) {
                for (auto& [sum, freq] : first_half[count]) {
                    curr[count + 1][sum + nums[i]] += freq;
                }
            }
            first_half = curr;
        }
        
        // Generate all possible subset sums for the second half
        vector<unordered_map<int, int>> second_half(n + 1);  // [count] -> {sum -> frequency}
        second_half[0][0] = 1;  // Base case: 0 elements with sum 0
        
        // DP for second half
        for (int i = n; i < nums.size(); i++) {
            auto curr = second_half;
            for (int count = 0; count < n; count++) {
                for (auto& [sum, freq] : second_half[count]) {
                    curr[count + 1][sum + nums[i]] += freq;
                }
            }
            second_half = curr;
        }
        
        int min_diff = INT_MAX;
        
        // Combine results from both halves
        for (int count1 = 0; count1 <= n; count1++) {
            int count2 = n - count1;
            
            // If either map is empty for these counts, skip
            if (first_half[count1].empty() || second_half[count2].empty()) {
                continue;
            }
            
            // For each sum in the first half
            for (auto& [sum1, _] : first_half[count1]) {
                // For each sum in the second half
                for (auto& [sum2, _] : second_half[count2]) {
                    int subset_sum = sum1 + sum2;
                    min_diff = min(min_diff, abs(total - 2 * subset_sum));
                }
            }
        }
        
        return min_diff;
    }
};
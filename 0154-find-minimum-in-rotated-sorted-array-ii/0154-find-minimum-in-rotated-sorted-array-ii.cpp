class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0, h = n - 1;
        int ans = nums[0];  // ✅ Fix: initialize with nums[0]

        while (l <= h) {
            int m = (l + h) / 2;

            // Subarray is already sorted
            if (nums[l] < nums[h]) {
                ans = min(ans, nums[l]);
                break;
            }

            // Handle duplicates
            if (nums[l] == nums[m] && nums[h] == nums[m]) {
                ans = min(ans, nums[m]);
                l++;
                h--;
                continue;
            }

            // Left part is sorted
            if (nums[l] <= nums[m]) {
                ans = min(ans, nums[l]);
                l = m + 1;
            }
            // Right part is sorted
            else {
                ans = min(ans, nums[m]);
                h = m - 1;
            }
        }

        return ans;
    }
};

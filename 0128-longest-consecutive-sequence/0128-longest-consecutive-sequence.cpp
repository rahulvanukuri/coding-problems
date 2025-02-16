#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end()); // Store unique numbers
        int maxLen = 0;

        for (int num : nums) {
            if (s.find(num - 1) == s.end()) { // Start of a new sequence
                int currNum = num;
                int currLen = 1;

                while (s.find(currNum + 1) != s.end()) {
                    currNum++;
                    currLen++;
                }
                
                maxLen = max(maxLen, currLen);
            }
        }
        return maxLen;
    }
};

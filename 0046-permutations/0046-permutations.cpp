class Solution {
public:
    void solve(vector<vector<int>>&ans , int index , vector<int>nums){
        //base case
        if(index>=nums.size()) {
            ans.push_back(nums);
            return;
        }
        // write one case and rest recursion will handle
        for(int i = index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            solve(ans , index+1 , nums);
            //backtrack to again reach the consistent state
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(ans , index , nums);
        return ans;
    }
};
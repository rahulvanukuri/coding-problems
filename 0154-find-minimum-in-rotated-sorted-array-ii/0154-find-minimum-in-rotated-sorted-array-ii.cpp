class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1,ans=nums[0];
        while(l<=h){
          int m=(l+h)/2;
               if (nums[l] < nums[h]) {
                ans = min(ans, nums[l]);
                break;
            }
          if(nums[l]==nums[m] && nums[h]==nums[m]){
               ans = min(ans, nums[m]);
            l++;
            h--;
            continue;
          }
          if(nums[l]<=nums[m]){
            ans=min(ans,nums[l]);
            l=m+1;
          }
          else{
            ans=min(ans,nums[m]);
            h=m-1;
          }
        }
        return ans;
    }
};
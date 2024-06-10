class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
     int t=0;
     sort(nums.begin(),nums.end());
     for(int i=1;i<nums.size();i++){
        if(nums[i]<=nums[i-1]){
            int d=abs(nums[i]-nums[i-1])+1;
            t+=d;
            nums[i]+=d;
        }
     }
     return t;
    }
};
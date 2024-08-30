class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,cur=0;
        for(auto i:nums){
            if(cur<0)cur=0;
            cur+=i;
            sum=max(cur,sum);
        }
        return sum;
    }
};
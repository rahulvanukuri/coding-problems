class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int res=0;
        int curr=0;
        for(int i=0;i<n;i++)
        {
            curr+=nums[i];
            if(curr==k)
                res++;
            if(mp.find(curr-k)!=mp.end())
            {
                res+=mp[curr-k];
            }
            mp[curr]++;
        }
        return res;
    }
};
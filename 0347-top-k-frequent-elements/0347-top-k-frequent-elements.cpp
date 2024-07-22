class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        vector<int>ans;
        for(auto it=mp.begin();it!=mp.end();it++){
         p.push({it->second,it->first});
         if(p.size()>k){
            p.pop();
         }
        }
        while(k--){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};
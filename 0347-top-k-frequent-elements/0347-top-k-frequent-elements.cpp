class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>ans;
       map<int,int>m;
       for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
       }
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
      for(auto it=m.begin();it!=m.end();it++){
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
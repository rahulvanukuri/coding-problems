class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int>ans;
    int n=nums.size();
    map<int,int>m;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }
     for(auto it=m.begin();it!=m.end();it++){
        q.push({it->second,it->first});
        if(q.size()>k){
            q.pop();
        }
     }
     while(k--){
        ans.push_back(q.top().second);
        q.pop();
     }
     return ans;
    }
};
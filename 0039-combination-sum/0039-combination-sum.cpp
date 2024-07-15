class Solution {
public:

void fun(vector<int>& candid, int target,int idx,vector<int>&cur,vector<vector<int>>&ans){
    if(target<0)
    return;
    else if(target==0){
       ans.push_back(cur);
       return;
    }
     for(int i=idx;i<candid.size();i++){
         cur.push_back(candid[i]);
         fun(candid,target-candid[i],i,cur,ans);
         cur.pop_back();
     }
}
    vector<vector<int>> combinationSum(vector<int>& candid, int target) {
        vector<vector<int>>ans;
        vector<int>cur;
      
        fun(candid,target,0,cur,ans);
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>ans;
        int n=inter.size();
        sort(inter.begin(),inter.end());
        for(int i=0;i<n;i++){
            int st=inter[i][0];
            int end=inter[i][1];
            if(!ans.empty()&& end<=ans.back()[1]){
           continue;
            }
            for(int j=i+1;j<n;j++){
                if(inter[j][0]<=end){
                    end=max(end,inter[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({st,end});
        }
        return ans;
    }
};
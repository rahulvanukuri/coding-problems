class Solution {
public:
    vector<vector<int>> dp;
   bool solve(string s1,string s2,string s3,int i,int j,int k){
        int p=s1.size(),q=s2.size(),r=s3.size();
       bool res=false;
       if(k==r && i==p && j==q){
           return true;
       }
       else if(k==r){
           return false;
       }
       if(dp[i][j]!=-1){
           return dp[i][j];
       }
       if(i<p && s1[i]==s3[k]){
           res=res||solve(s1,s2,s3,i+1,j,k+1);
       }
        if(j<q && s2[j]==s3[k]){
           res=res||solve(s1,s2,s3,i,j+1,k+1);
       }
       return dp[i][j]=res;
   }
    bool isInterleave(string s1, string s2, string s3) {
        int p=s1.size(),q=s2.size(),r=s3.size();
        dp.assign(p+1,vector<int>(q+1,-1));
        return solve(s1,s2,s3,0,0,0);
        
    }
};

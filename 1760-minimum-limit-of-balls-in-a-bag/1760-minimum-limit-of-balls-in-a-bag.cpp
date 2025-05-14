class Solution {
public:
   bool mball(vector<int>&nums,int m,int pen){
    int n=nums.size();
    long long b=0;
    for(int i=0;i<n;i++){
        b+=(nums[i]-1LL)/pen;
    }
    return b<=m;
   }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l=1,h=*max_element(nums.begin(),nums.end());
        int ans=h;
        while(l<=h){
            int m=(l+h)/2;
            if(mball(nums,maxOperations,m)){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};
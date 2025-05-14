class Solution {
public:
int cs(vector<int>&nums,int k){
    int cnt=1,cs=0;
    for(int i=0;i<nums.size();i++){
        if(cs+nums[i]>k){
            cnt+=1;
         cs=nums[i];
        }
        else{
            cs+=nums[i];
        }
    }
    return cnt;
}
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);
        while(l<=h){
            int m=(l+h)/2;
            if(cs(nums,m)<=k){
                h=m-1;
            }
            else{
                l=m+1;            }
        }
        return l;
    }
};
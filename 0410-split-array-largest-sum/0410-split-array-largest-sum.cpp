class Solution {
public:
    int cs(vector<int>&nums,int k){
        int p=0,c=1;
        for(int i=0;i<nums.size();i++){
            if(p+nums[i]>k){
            c+=1;
            p=nums[i];
            }
            else{
               p+=nums[i]; 
            }
        }
        return c;
    }

    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);
        while(l<=h){
            int m=l+(h-l)/2;
            if(cs(nums,m)>k){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return l;
    }
};
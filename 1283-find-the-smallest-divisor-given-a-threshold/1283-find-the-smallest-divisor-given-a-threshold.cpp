class Solution {
public:
    int div(vector<int>&nums,int d){
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=(nums[i]+d-1)/d;
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=*max_element(nums.begin(),nums.end());
        while(l<=h){
            int m=(l+h)/2;
            if(div(nums,m)<=threshold){
                h=m-1;
            }
            else{
                l=m+1;
            }

        }
        return l;
    }
};
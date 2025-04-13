class Solution {
public:
    int mySqrt(int x) {
        if(0==x)return 0;
        int ans;
        int l=1,h=x;
        while(l<=h){
          int mid=l+(h-l)/2;
          if((long long)mid * mid <= x){
            ans=mid;
            l=mid+1;
          }
          else{
          h=mid-1;
          }
        }
        return ans;
    }
};
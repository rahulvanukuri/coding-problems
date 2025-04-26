class Solution {
public:
    bool cal(vector<int>& a, long long mid,int k)
    {
        long long int sum=0;
        for(auto i:a)
        {
            sum+=(mid/i);
            if(sum>=k) return true;
        }
        return (sum>=k)?true:false;
    }
    long long minimumTime(vector<int>& a, int k) {
    int n=a.size();
     long long int l=1,h=(long long)1e14,ans=0;
        
        while(l<=h)
        {
            long long int mid=l+(h-l)/2;
            if(cal(a,mid,k))
            {
                
                ans=mid;
                h=mid-1;
            }
            else
                l=mid+1; 
        }
        return ans;
    }
};
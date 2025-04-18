class Solution {
public:
    int findmax(vector<int>&v){
        int ans=INT_MIN;
        for(int i=0;i<v.size();i++){
            ans=max(ans,v[i]);
        }
        return ans;

    }
    long long  th(vector<int>&v,int h){
        long long t=0;
        int n=v.size();
        for(int i=0;i<v.size();i++){
           t += (v[i] + h - 1) / h;
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,hi=findmax(piles);
        while(l<=hi){
            int m=l+(hi-l)/2;
            long long  t=th(piles,m);
            if(t<=h){
                hi=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};
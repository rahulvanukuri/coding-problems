class Solution {
public:
   int find(vector<int>&v,int k){
   int d=1,l=0;
   for(int i=0;i<v.size();i++){
    if(v[i]+l>k){
        d+=1;
        l=v[i];
    }
    else{
        l+=v[i];
    }
   }
   return d;

   }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        while(l<=h){
            int m=(l+h)/2;
             if(find(weights,m)<=days){
                h=m-1;
             }
             else{
                l=m+1;
             }
        }
        return l;
    }
};
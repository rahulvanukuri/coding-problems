class Solution {
public:
    int findays(vector<int>&weights,int cap){
        int d=1,l=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+l>cap){
                d+=1;
                l=weights[i];
            }
            else{
                l+=weights[i];
            }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        while(l<=h){
            int m=(l+h)/2;
            int nd=findays(weights,m);
            if(nd<=days){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};
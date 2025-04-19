class Solution {
public:
    bool ispos(vector<int>& v,int day,int m,int k){
        int cnt=0,b=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<=day){
                cnt++;
            }
            else{
                b+=(cnt/k);
                cnt=0;
            }
        }
        b+=(cnt/k);
        return (b>=m);
    }
    int minDays(vector<int>& bloom, int m, int k) {
    long long val=1LL*m*1LL*k;
    if(val>bloom.size()) return -1;
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<bloom.size();i++){
         maxi=max(maxi,bloom[i]);
         mini=min(mini,bloom[i]);
    }
    int l=mini,h=maxi;
    while(l<=h){
        int mi=(l+h)/2;
        if(ispos(bloom,mi,m,k)){
            h=mi-1;
        }
        else{
            l=mi+1;
        }
    }
    return l;
    }
};
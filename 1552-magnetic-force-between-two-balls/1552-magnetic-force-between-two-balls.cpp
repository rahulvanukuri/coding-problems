class Solution {
public:
bool pl(vector<int>&p,int m,int b){
    int cnt=1,l=p[0];
    for(int i=0;i<p.size();i++){
        if(p[i]-l>=b){
            cnt++;
            l=p[i];
        }
    }
    return cnt>=m;
}
    int maxDistance(vector<int>& p, int m) {
        int n=p.size();
        sort(p.begin(),p.end());
        int l=0,h=p[n-1]-p[0];
        while(l<=h){
            int mi=(l+h)/2;
            if(pl(p,m,mi)){
                l=mi+1;
            }
            else{
                h=mi-1;
            }
        }
        return h;
    }
};
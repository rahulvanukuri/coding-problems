class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>v;
       int c=0;
       for(int i=0;i<=n;i++){
        int x=i;
        while(x){
            x&=(x-1);
            c++;
        }
        v.push_back(c);
        c=0;
       }
       return v;
    }
};
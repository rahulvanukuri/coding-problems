class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int c=0;
        vector<int>v(60,0);
        for(int i=0;i<time.size();i++){
            int a=time[i]%60;
            if(a==0){
                c+=v[0];
            }
            else{
            c+=v[60-a];
            }
            
            v[a]++;
        }
        return c;
    }
};
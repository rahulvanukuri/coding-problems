class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int c=0;
        vector<int>v(60,0);
        for(int i=0;i<time.size();i++){
         int z=time[i]%60;
         if(z==0){
            c+=v[0];
         }
         else{
            c+=v[60-z];
         }
         v[z]++;
        }
        return c;
    }
};
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int maxloc=1000;
        vector<int>k(maxloc+1,0);
        for(const auto &it:trips){
            int numpa=it[0];
            int fr=it[1];
            int to=it[2];
            k[fr]+=numpa;
            k[to]-=numpa;

        }
        int cup=0;
        for(int i=0;i<maxloc+1;i++){
            cup+=k[i];
            if(cup>capacity){
                return false;
            }
        }
        return true;
    }
};
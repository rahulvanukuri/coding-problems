class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>k(n+1,0);
        for(const auto &it:bookings){
            int fr=it[0]-1;
            int ls=it[1]-1;
            int se=it[2];
            k[fr]+=se;
            if(ls+1<n)
            k[ls+1]-=se;
        }
        vector<int>res(n,0);
        res[0]=k[0];
        for(int i=1;i<n;i++){
            res[i]=res[i-1]+k[i];
        }
        return res;
    }
};
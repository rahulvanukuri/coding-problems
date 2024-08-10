class Solution {
public:
    int getSum(int a, int b) {
        if(b==0)return a;
        int xr=a^b;
        int cr=(unsigned int)(a&b)<<1;
        return getSum(xr,cr);
    }
};
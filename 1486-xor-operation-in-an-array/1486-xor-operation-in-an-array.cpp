class Solution {
public:
    int xorOperation(int n, int start) {
        
        int z=0;
        for(int i=0;i<n;i++){
            
            z=z^(start+(2*i));
        }
        return z;
    }
};
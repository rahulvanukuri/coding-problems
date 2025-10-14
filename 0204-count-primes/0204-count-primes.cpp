class Solution {
public:
    int countPrimes(int n) {
                vector<bool>primes(n+1,true);
        if(n<2)return 0;
        primes[0]=false;
        primes[1]=false;
        int z=2;
        while(z*z<=n){
            if(primes[z]){
                for(int i=z*z;i<=n;i=i+z){
                    primes[i]=false;
                }
            }
            z++;
        }
        int k=0;
        for(int i=2;i<n;i++){
            if(primes[i]==true){
                k++;
            }
        }
        return k;
    }
};
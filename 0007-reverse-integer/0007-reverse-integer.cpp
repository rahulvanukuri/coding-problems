class Solution {
public:
    int reverse(int x) {
        int p=x;
       long sum=0;
       while(x){
        int rem=x%10;
        x/=10;
        sum=sum*10+rem;
       }
       if(sum>2147483641 || sum<-2147483641) return 0;
       return sum;
    }
};
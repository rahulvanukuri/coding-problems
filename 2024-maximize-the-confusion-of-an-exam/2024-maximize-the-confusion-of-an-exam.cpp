class Solution {
public:
   int maxcons(string &s,int k,char tar){
    int le=0,mx=0,fp=0;
    for(int r=0;r<s.size();r++){
        if(s[r]!=tar)fp++;
         while(fp>k){
        if(s[le]!=tar)fp--;
        le++;
    }
    
    mx=max(mx,r-le+1);
    }
   return mx;
   }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(maxcons(answerKey,k,'T'),maxcons(answerKey,k,'F'));
    }
};
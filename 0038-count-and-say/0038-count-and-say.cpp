class Solution {
public:
    string countAndSay(int n) {
       if(n==1)return "1";
       int c=0;
      string s=countAndSay(n-1);
      string res;
       for(int i=0;i<s.length();i++){
       c++;
       if(i==s.length()-1||s[i]!=s[i+1]){
           res.append(to_string(c)+s[i]);
           c=0;
       }
       } 
       return res;
    }
};
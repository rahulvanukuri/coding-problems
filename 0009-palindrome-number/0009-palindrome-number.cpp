class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int n=s.length();
        int i=0,j=n-1;
         while(i<=j)if(s[i++]!=s[j--]) return false;
         return true;
    }
};
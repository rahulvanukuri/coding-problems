class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char,int> mp;
        int len=0,start=0;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
            start=max(start,mp[s[i]]+1);
            }
            mp[s[i]]=i;
        len=max(len,i-start+1);
        }
        
         return len;
    }
   
};
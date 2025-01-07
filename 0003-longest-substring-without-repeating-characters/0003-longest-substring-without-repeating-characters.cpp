class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int l=0,st=0;
    map<char,int>mp;
    for(int i=0;i<s.length();i++){
      if(mp.find(s[i])!=mp.end()){
        st=max(st,mp[s[i]]+1);
      }
      mp[s[i]]=i;
      l=max(l,i-st+1);
    }
    return l;
        
    }
};
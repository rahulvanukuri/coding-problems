class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        sort(s.begin(),s.end());
        int n=s.size();
        string f=s[0],l=s[n-1];
        for(int i=0;i<min(f.size(),l.size());i++){
            if(f[i]!=l[i]){
                return ans;
            }
            ans+=f[i];
        }
        return ans;
    }
};
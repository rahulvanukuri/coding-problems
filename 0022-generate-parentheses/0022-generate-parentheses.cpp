class Solution {
public:
vector<string> ans;
  void generate(int open,int close, string s,int n){
    if(s.size()==2*n){
        ans.push_back(s);
        return;
    }
    if(open<n) generate(open+1,close,s+'(',n);
    if(close<open)generate(open,close+1,s+')',n);
  }
    vector<string> generateParenthesis(int n) {
       generate(0,0,"",n);
       return ans; 
    }
};
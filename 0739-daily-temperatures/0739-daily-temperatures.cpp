class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>s;
        int n=temp.size();
        vector<int>v(n,0);
        for(int i=n-1;i>=0;i--){
           while(!s.empty() && temp[s.top()]<=temp[i]){
            s.pop();
           }
           if(!s.empty()){
            v[i]=s.top()-i;
           }
           s.push(i);
        }
        return v;
    }
};
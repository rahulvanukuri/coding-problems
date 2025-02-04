class Solution {
public:
    int largestRectangleArea(vector<int>& he) {
        int n=he.size();
        vector<int>l(n,-1);
        vector<int>r(n,n);
        stack<int>s;
        stack<int>p;
        for(int i=0;i<n;i++){
            while(!s.empty() && he[s.top()]>=he[i]){
              s.pop();
            }
            if(!s.empty()){
                l[i]=s.top();
            }
            s.push(i);
        }
        for(int i=n-1;i>=0;i--){
            while(!p.empty() && he[p.top()]>=he[i]){
                p.pop();
            }
            if(!p.empty()){
                r[i]=p.top();
            }
            p.push(i);
        }
        int mx=0;
        for(int i=0;i<n;i++){
            int wi=r[i]-l[i]-1;
            int ar=wi*he[i];
            mx=max(mx,ar);
        }
        return mx;
        }
};
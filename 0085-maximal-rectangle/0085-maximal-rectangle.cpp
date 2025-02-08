class Solution {
public:
    int maxh(vector<int> v){
        int n=v.size();
        vector<int>l(n,-1);
        vector<int>r(n,n);
        stack<int>s;
        stack<int>p;
        for(int i=0;i<n;i++){
            while(!s.empty() && v[s.top()]>=v[i]){
                s.pop();
            }
            if(!s.empty()){
                l[i]=s.top();
            }
            s.push(i);
        }
        for(int i=n-1;i>=0;i--){
            while(!p.empty() && v[p.top()]>=v[i]){
                p.pop();
            }
            if(!p.empty()){
                r[i]=p.top();
            }
            p.push(i);
        }
        int mx=0;
        for(int i=0;i<n;i++){
            int w=r[i]-l[i]-1;
            int ar=w*v[i];
            mx=max(mx,ar);
        }
        return mx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty() || matrix[0].empty())return 0;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>his(n,0);
        int mx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    his[j]+=1;
                }
                else{
                    his[j]=0;
                }

            }
                mx=max(mx,maxh(his));
        }
     
        return mx;
    }
};
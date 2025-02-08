class Solution {
public:
    int mah(vector<int>v){
        stack<int>s;
        int n=v.size();
        int mx=0;
        for(int i=0;i<=n;i++){
         while(!s.empty() &&(i==n || v[s.top()]>v[i])){
            int h=v[s.top()];
            s.pop();
            int wi=s.empty()?i:(i-s.top()-1);
            mx=max(mx,h*wi);
         }
         s.push(i);
        }
        return mx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
     int m=matrix.size();
     int n=matrix[0].size();
     if(m==0)return 0;   
     vector<int>his(n,0);
     int mx=0;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]=='1'){
                his[j]+=1;
            }
            else his[j]=0;
                mx=max(mx,mah(his));
            
        }
        
     }
     return mx;
    }
};
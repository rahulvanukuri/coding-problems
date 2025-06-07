class Solution {
public:
    bool dfs(vector<int>&arr,int i){
        if(i<0||i>=arr.size()||arr[i]<0){
            return false;
        }
        if(arr[i]==0){
            return true;
        }
        int j=arr[i];
        arr[i]=-arr[i];
        return dfs(arr,i+j)||dfs(arr,i-j);
    }
    bool canReach(vector<int>& arr, int start) {
        return dfs(arr,start);
    }
};
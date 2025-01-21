class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n=len(isConnected)
        vis=[0]*n
        def dfs(city):
            for ne in range(n):
                if isConnected[city][ne]==1 and not vis[ne]:
                    vis[ne]=1
                    dfs(ne)
            
        pr=0
        for i in range(n):
            if  not vis[i]:
                vis[i]=1
                dfs(i)
                pr+=1
        return pr        
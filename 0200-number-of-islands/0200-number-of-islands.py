class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        vis=set()
        row,col=len(grid),len(grid[0])
        p=0
        def bfs(r,c):
            q=collections.deque()
            q.append((r,c))
            vis.add((r,c))
            while q:
                cr,cc=q.popleft()
                dire=[[0,1],[1,0],[0,-1],[-1,0]]
                for dr,dc in dire:
                    nr,nc=cr+dr,cc+dc
                    if(nr in range(len(grid)) and nc in range(col) and grid[nr][nc]=='1' and (nr,nc)not in vis):
                        q.append((nr,nc))
                        vis.add((nr,nc))
        for r in range(row):
            for c in range(col):
                if (r,c) not in vis and grid[r][c]=='1':
                    bfs(r,c)
                    p+=1
        return p
            

class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        row,col=len(grid),len(grid[0])
        vis=set()
        isl=0
        def bfs(r,c):
            q=collections.deque()
            q.append((r,c))
            vis.add((r,c))
            while q:
                dire=[[0,1],[0,-1],[1,0],[-1,0]]
                cr,cc=q.popleft()
                for dr,dc in dire:
                    nr,nc=cr+dr,cc+dc
                    if  nr in range(row) and nc in range(col) and grid[nr][nc]=='1' and (nr,nc) not in vis:
                        q.append((nr,nc))
                        vis.add((nr,nc))
        for r in range(row):
            for c in range(col):
                if grid[r][c]=='1' and (r,c) not in vis:
                    bfs(r,c)
                    isl+=1
        return isl

        
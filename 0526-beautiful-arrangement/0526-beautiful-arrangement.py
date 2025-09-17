class Solution:
    def countArrangement(self, n: int) -> int:
        def dfs(pos,used):
            if pos>n:
                return 1
            if(pos,used) in memo:
                return memo[(pos,used)]
            tot=0
            for i in range(1,n+1):
                if not (used>>(i-1))&1:
                    if i%pos==0 or pos%i==0:
                        tot+=dfs(pos+1,used|(1<<(i-1)))
                
            memo[(pos,used)]=tot
            return tot
        memo={}
        return dfs(1,0)

        
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            s=set()
            for j in range(9):
                it=board[i][j]
                if it in s:
                    return False
                if it!='.':
                    s.add(it)
        for i in range(9):
            s=set()
            for j in range(9):
                it=board[j][i]
                if it in s:
                    return False
                if it!='.':
                    s.add(it)
        starts=[(0,0),(0,3),(0,6),
        (3,0),(3,3),(3,6),
        (6,0),(6,3),(6,6)]
        for i,j in starts:
            s=set()
            for r in range(i,i+3):
                for c in range(j,j+3):
                    it=board[r][c]
                    if it in s:
                        return False
                    if it!='.':
                        s.add(it)
        return True


        

        
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        r,c=len(matrix),len(matrix[0])
        l,h=0,r*c-1
        while l<=h:
            mid=l+(h-l)//2
            row,col=divmod(mid,c)
            midval=matrix[row][col]
            if midval==target:
                return True
            elif midval<target:
                l=mid+1
            else:
                h=mid-1
        return False
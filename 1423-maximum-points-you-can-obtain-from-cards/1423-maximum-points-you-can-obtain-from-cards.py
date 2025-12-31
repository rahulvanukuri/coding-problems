class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        ms,lsum,rsum=0,0,0
        n=len(cardPoints)
        
        for  i in range(k):
            lsum+=cardPoints[i]
        ms=lsum
        r=n-1
        for i in range(k-1,-1,-1):
            lsum-=cardPoints[i]
            rsum+=cardPoints[r]
            r-=1
            ms=max(ms,lsum+rsum)
        return ms



        
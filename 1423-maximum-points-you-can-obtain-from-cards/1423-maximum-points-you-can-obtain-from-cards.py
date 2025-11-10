class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        lsum,rsum,ms=0,0,0
        for i in range(k):
            lsum=lsum+cardPoints[i]
            
        ms=lsum
        r=len(cardPoints)-1
        for i in range(k-1,-1,-1):
            lsum-=cardPoints[i]
            rsum+=cardPoints[r]
            r-=1
            ms=max(ms,lsum+rsum)
        return ms


        
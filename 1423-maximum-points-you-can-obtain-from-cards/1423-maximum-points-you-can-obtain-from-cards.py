class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        lsum,rsum,ms=0,0,0
        for i in range(k):
            lsum=lsum+cardPoints[i]
        ms=lsum

        ridx=len(cardPoints)-1
        for i in range(k-1,-1,-1):
            lsum=lsum-cardPoints[i]
            rsum=rsum+cardPoints[ridx]
            ridx=ridx-1
            ms=max(ms,lsum+rsum)
        return ms
        
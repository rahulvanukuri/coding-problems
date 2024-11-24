class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        mk,mak=1,max(piles)
        while mk<mak:
            mid=(mak+mk)//2
            th=0
            for p in piles:
                th+=(p+mid-1)//mid
            if th<=h:
                mak=mid
            else:
                mk=mid+1
        return mk
            
        
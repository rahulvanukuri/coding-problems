class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        ts,rem=divmod(sum(nums),2)
        if rem:
            return False
        can=[True]+[False]*ts
        for n in nums:
            for j in range(ts,n-1,-1):
                can[j]=can[j]or can[j-n]
        return can[ts]    
        
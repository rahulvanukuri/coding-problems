class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ms=0
        cs=0
        i=0
        s=set()
        n=len(nums)
        if n<k:
            return 0
        for j in range(n):
            while nums[j]  in s or j-i+1>k:
                s.remove(nums[i])
                cs-=nums[i]
                i+=1
            s.add(nums[j])
            cs+=nums[j]
            if j-i+1==k:
                ms=max(ms,cs)
        return ms


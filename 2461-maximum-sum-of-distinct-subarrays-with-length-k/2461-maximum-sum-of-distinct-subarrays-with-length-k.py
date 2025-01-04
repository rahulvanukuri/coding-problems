class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ms=0
        cs=0
        j=0
        s=set()
        n=len(nums)
        if n<k:
            return 0
        for i in range(n):
            while nums[i] in s or i-j+1>k:
                s.remove(nums[j])
                cs-=nums[j]
                j+=1
            s.add(nums[i])
            cs+=nums[i]
            if i-j+1==k:
                ms=max(ms,cs)
        return ms
        
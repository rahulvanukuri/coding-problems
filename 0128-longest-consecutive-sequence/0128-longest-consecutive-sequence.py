class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        lo=0
        ns=set(nums)
        for i in nums:
            if i-1 not in ns:
                l=0
                while i+l  in ns:
                    l+=1
                lo=max(lo,l)
        return lo
        
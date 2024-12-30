class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        lo=0
        ns=set(nums)
        for n in nums:
            if n-1 not in ns:
                l=0
                while n+l in ns:
                    l+=1
            lo=max(l,lo)
        return lo

        
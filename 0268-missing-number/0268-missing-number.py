class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        a=0
        for i in range(0,n):
            a=a^i^nums[i]
        a=a^n
        return a
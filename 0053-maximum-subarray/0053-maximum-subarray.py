class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        s,ma=0,float('-inf')
        for i in range(len(nums)):
            s+=nums[i]
            if s>ma:
                ma=s
            if s<0:
                s=0
        return ma

        
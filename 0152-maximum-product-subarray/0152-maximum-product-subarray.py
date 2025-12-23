class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        cp,mp=nums[0],nums[0]
        for i in range(1,len(nums)):
            cp=cp*nums[i]
            mp=max(cp,mp)
        return mp

        
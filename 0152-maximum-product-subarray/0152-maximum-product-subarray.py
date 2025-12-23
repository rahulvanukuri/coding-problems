class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        curmin=glob=curmax=nums[0]
        for i in range(1,len(nums)):
            num=nums[i]
            tmax=max(num,curmax*num,curmin*num)
            curmin=min(num,curmax*num,curmin*num)
            curmax=tmax
            glob=max(curmax,glob)
        return glob
        
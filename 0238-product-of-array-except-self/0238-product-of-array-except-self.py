class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res=len(nums)*[1]
        pr=1
        for i in range(len(nums)):
            res[i]=pr
            pr*=nums[i]
        ps=1
        for i in range(len(nums)-1,-1,-1):
            res[i]*=ps
            ps*=nums[i]
        return res
        
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res=[]
        n=len(nums)
        def back(st):
            if st==n:
                res.append(nums[:])
                return
            for i in range(st,n):
                nums[st],nums[i]=nums[i],nums[st]
                back(st+1)
                nums[st],nums[i]=nums[i],nums[st]
        back(0)
        return res
        
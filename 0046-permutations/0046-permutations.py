class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums)==1:
            return [nums]
        res=[]
        for id,i in enumerate(nums):
            if id==len(nums)-1:
                new_nums=nums[:id]
            elif id==0:
                new_nums=nums[1:]
            else:
                new_nums=nums[:id]+nums[id+1:]
            new_res=self.permute(new_nums)
            for r in new_res:
                res.append(r+[i])
        return res
            

        
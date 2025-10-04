class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res=[]
        curr=[]
        used=set()
        def back(idx):
            if idx==len(nums):
                res.append(curr[:])
                return
            for i in nums:
                if i not in used:
                    used.add(i)
                    curr.append(i)
                    back(idx+1)
                    curr.pop()
                    used.remove(i)
        back(0)
        return res

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        ls={}
        for i,num in enumerate(nums):
            if num in ls:
                return num
            ls[num]=i
        
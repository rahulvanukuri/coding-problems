# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        self.m=float('-inf')
        def helpe(node):
            if not node:
                return 0
            ls=max(helpe(node.left),0)
            rs=max(helpe(node.right),0)
            cs=node.val+ls+rs
            self.m=max(self.m,cs)
            return node.val+max(ls,rs)
        helpe(root)
        return self.m


        
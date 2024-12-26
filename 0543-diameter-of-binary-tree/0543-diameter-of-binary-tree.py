# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.m=0
        def helpe(node):
            if not node:
                return 0
            lh=helpe(node.left)
            rh=helpe(node.right)
            self.m=max(self.m,lh+rh)
            return 1+max(lh,rh)
        helpe(root)
        return self.m
        
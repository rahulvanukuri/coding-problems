# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        def inorder(node):
            if not node:
                return
            le=inorder(node.left)
            if le:
                return le
            self.c+=1
            if self.c==k:
                return node.val
            return inorder(node.right)
        self.c=0
        return inorder(root)
        
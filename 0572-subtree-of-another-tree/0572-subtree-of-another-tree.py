# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def issame(p,q):
            if not p and not q:
                return True
            if (p and not q) or (q and not p):
                return False
            if p.val!=q.val:
                return False
            return issame(p.left,q.left) and issame(p.right,q.right)
        def sub(root):
            if not root:
                return False
            if issame(root,subRoot):
                return True
            return sub(root.left) or sub(root.right)
        return sub(root)
        
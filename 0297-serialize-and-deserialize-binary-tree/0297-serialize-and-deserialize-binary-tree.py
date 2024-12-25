# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:

    def serialize(self, root):
        """Encodes a tree to a single string.
        
        :type root: TreeNode
        :rtype: str
        """
        if not root:
            return "[]"
        res=[]
        qu=[root]
        while qu:
            node=qu.pop(0)
            if node:
                res.append(str(node.val))
                qu.append(node.left)
                qu.append(node.right)
            else:
                res.append('null')
        return "[" + ",".join(res) + "]" 
        

    def deserialize(self, data):
        """Decodes your encoded data to tree.
        
        :type data: str
        :rtype: TreeNode
        """
        if data=="[]":
            return None
        nodes=data[1:-1].split(',')
        if not nodes or nodes[0]=='null':
            return None
        root=TreeNode(int(nodes[0]))
        qu=[root]
        idx=1
        while qu:
            node=qu.pop(0)
            if idx<len(nodes) and nodes[idx]!='null':
                node.left=TreeNode(int(nodes[idx]))
                qu.append(node.left)
            idx+=1
            if idx<len(nodes) and nodes[idx]!='null':
                node.right=TreeNode(int(nodes[idx]))
                qu.append(node.right)
            idx+=1
        return root
                

        

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))
class Solution:
    def __init__(self):
        self.maxi = 0
    def f(self, root):
        if not root: return 0
        left = self.f(root.left)
        right = self.f(root.right)
        self.maxi = max(self.maxi,left+right)
        return 1 +max(left , right)
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.f(root)
        return  self.maxi
        
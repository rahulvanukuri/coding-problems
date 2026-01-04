class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        if n==1:
            return 0
        le=2**(n-2)
        if k<=le:
            return self.kthGrammar(n-1,k)
        else:
            return 1-self.kthGrammar(n-1,k-le)

        
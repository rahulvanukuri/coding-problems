class Solution:
    def countAndSay(self, n: int) -> str:
        if n==1:
            return "1"
        
        prev=self.countAndSay(n-1)
        c=0
        res=""
        for i in range(len(prev)):
            c+=1
            if i==len(prev)-1 or prev[i]!=prev[i+1]:
                res+=str(c)+prev[i]
                c=0
        return res
        
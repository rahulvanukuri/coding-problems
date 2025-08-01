class Solution:
    def minFlips(self, s: str) -> int:
        n=len(s)
        s=s+s
        alt1,alt2="",""
        for i in range(len(s)):
            alt1+="1" if i%2 else "0"
            alt2+="0" if i%2 else "1"
        diffs1,diffs2=0,0
        l=0
        res=len(s)
        for r in range(len(s)):
            if s[r]!=alt1[r]:
                diffs1+=1
            if s[r]!=alt2[r]:
                diffs2+=1
            if r-l+1>n:
                if s[l]!=alt1[l]:
                    diffs1-=1
                if s[l]!=alt2[l]:
                    diffs2-=1
                l+=1
            if r-l+1==n:
                res=min(res,diffs1,diffs2)
        return res

        
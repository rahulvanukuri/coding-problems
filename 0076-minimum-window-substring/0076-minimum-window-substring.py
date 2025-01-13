class Solution:
    def minWindow(self, s: str, t: str) -> str:
        d={}
        i=0
        m=float('inf')
        c=0
        w={}
        st=0
        if not s or not t or len(s)<len(t):
            return ""
        for k in t:
            d[k]=d.get(k,0)+1
        for j in range(len(s)):
            ch=s[j]
            w[ch]=w.get(ch,0)+1
            if ch in d and w[ch]==d[ch]:
                c+=1
            while c==len(d):
                if j-i+1<m:
                    m=j-i+1
                    st=i
                p=s[i]
                w[p]-=1
                if p in d and w[p]<d[p]:
                    c-=1
                i+=1
            
        return s[st:st+m] if m!=float('inf') else ""
            
        
        
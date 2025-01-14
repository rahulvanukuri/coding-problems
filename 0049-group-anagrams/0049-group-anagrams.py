class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d={}
        for i in strs:
            st=''.join(sorted(i))
            if st not in d:
                d[st]=[]
            d[st].append(i)
        return list(d.values())
        
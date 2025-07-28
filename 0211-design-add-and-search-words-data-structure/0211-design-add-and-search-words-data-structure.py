class TrieNode:
    def __init__(self):
        self.child={}
        self.wordend=False
class WordDictionary:

    def __init__(self):
        self.root=TrieNode()
        

    def addWord(self, word: str) -> None:
        curr=self.root
        for c in word:
            if c not in curr.child:
                curr.child[c]=TrieNode()
            curr=curr.child[c]
        curr.wordend=True
        

    def search(self, word: str) -> bool:
        def dfs(idx,node):
            if idx==len(word):
                return node.wordend
            ch=word[idx]
            if ch=='.':
                for n in node.child.values():
                    if(dfs(idx+1,n)):
                        return True
                return False
            else:
                if ch not in node.child:
                    return False
                return dfs(idx+1,node.child[ch])
        return dfs(0,self.root)
        


# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)
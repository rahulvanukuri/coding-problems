class TrieNode:
    def __init__(self):
        self.child={}
        self.isend=False
class Trie:

    def __init__(self):
        self.root=TrieNode()
        

    def insert(self, word: str) -> None:
        curr=self.root
        for c in word:
            if c not in curr.child:
                curr.child[c]=TrieNode()
            curr=curr.child[c]
        curr.isend=True
        

    def search(self, word: str) -> bool:
        curr=self.root
        for c in word:
            if c not in curr.child:
                return False
            curr=curr.child[c]
        return curr.isend

        

    def startsWith(self, prefix: str) -> bool:
        curr=self.root
        for c in prefix:
            if c not in curr.child:
                return False
            curr=curr.child[c]
        return True


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
struct TrieNode{
    TrieNode *ch[2]={};
    void increase(int num){
        TrieNode *cur=this;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(cur->ch[bit]==nullptr)cur->ch[bit]=new TrieNode();
            cur=cur->ch[bit];
        }
    }
    int fmax(int n){
        TrieNode *cur=this;
        int ans=0;
        for(int i=31;i>=0;--i){
            int b=(n>>i)&1;
            if(cur->ch[1-b]!=nullptr){
                cur=cur->ch[1-b];
                ans|=(1<<i);
            }else cur=cur=cur->ch[b];
        }
        return ans;
    }
};

class Solution {
public:

    int findMaximumXOR(vector<int>& nums) {
        TrieNode *tr=new TrieNode();
        for(int x:nums)tr->increase(x);
        int a=0;
        for(int x:nums)a=max(a,tr->fmax(x));
        return a;
    }
};
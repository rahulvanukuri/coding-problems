class Solution {
public:
    int minFlips(string target) {
        int f=0,c=0;
        for(int i=0;i<target.size();i++){
            if(target[i]-'0'!=f){
                c++;
                f=target[i]-'0';
            }
        }
        return c;
    }

};
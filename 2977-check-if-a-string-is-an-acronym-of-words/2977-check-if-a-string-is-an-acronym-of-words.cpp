class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string t="";
        for(auto w:words){
            t=t+w[0];
        
        }
        if(t==s){
            return 1;
        }
        return 0;
    }
};
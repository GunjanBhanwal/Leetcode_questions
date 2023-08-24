class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string t="";
        for(auto w:words){
            t+=w[0];
        }
        if(s==t){
            return 1;
        }
        return 0;
    }
};
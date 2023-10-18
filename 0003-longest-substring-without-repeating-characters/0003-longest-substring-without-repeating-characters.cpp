class Solution {
public:
bool check(char c,string a){
    for(int i=0;i<a.size();i++){
        if(c==a[i]){
            return true;
        }
    }
    return false;
}
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int max;
        string a="";
        for(int i=0;i<s.size();i++){
            if(check(s[i],a)){
                i=i-count;
                count=0;
                a="";
            }
            else{
                count++;
                a.push_back(s[i]);
            }
            if(count>max){
                max=count;
            }
        }
        return max;
    }
};
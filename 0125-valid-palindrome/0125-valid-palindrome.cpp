class Solution {
private:
char tolower(char ch){
   if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9')){
       return ch;
   }
   else{
       char temp=ch-'A'+'a';
       return temp;
   }
    
}
int check(char ch){
    if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9')||(ch>='A'&& ch<='Z')){
        return 1;
    }
    return 0;
}
int palindrone(string s){
    string temp=s;
    int st=0;
    int e=s.size()-1;
    while(st<e){
        swap(s[st++],s[e--]);
    }
    if(temp==s){
        return 1;
    }
    return 0;

}
public:
    bool isPalindrome(string s) {
       string temp;
       for(int i=0;i<s.size();i++){
           if(check(s[i])){
               temp.push_back(s[i]);
           }
       }
       for(int i=0;i<temp.size();i++){
           temp[i]=tolower(temp[i]);
       }
       if(palindrone(temp)){
           return 1;
       }
       return 0;
    }
};
class Solution {
public:
    bool isValid(string s) {
       stack<char> ans;
       if(s[0]==')'||s[0]==']'||s[0]=='}')
            return false;
       for(int i=0;i<s.size();i++){
           if(s[i]=='(' || s[i]=='[' ||s[i]=='{'){
               ans.push(s[i]);
           }
           else if(ans.size()){
               char a=ans.top();
               if((s[i]==')' && a!='(')||(s[i]=='}' && a!='{')||(s[i]==']' && a!='[')){
                return false;
                }
            ans.pop();
           }
           else{
               return false;
           }
       } 
      if(!ans.empty()){
          return false;
      }
      return true;
    }
};
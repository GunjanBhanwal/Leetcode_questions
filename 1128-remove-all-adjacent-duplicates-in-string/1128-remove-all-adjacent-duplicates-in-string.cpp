class Solution {
public:
    string removeDuplicates(string s) {
       stack<char> ans;
       string a="";
       for(int i=0;i<s.size();i++){
           if(ans.empty()){
               ans.push(s[i]);
           }
           else if(ans.top()==s[i]){
                   ans.pop();
               }
           else{
               ans.push(s[i]);
           }
       } 
      while(!ans.empty()){
          a.push_back(ans.top());
          ans.pop();
      }
      reverse(a.begin(),a.end());
       return a;
    }
};
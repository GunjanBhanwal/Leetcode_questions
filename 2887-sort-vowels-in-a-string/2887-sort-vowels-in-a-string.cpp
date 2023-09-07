class Solution {
public:
    string sortVowels(string s) {
      string ans;
      for(int i=0;i<s.size();i++){
          if(s[i]=='a' ||s[i]=='A' ||s[i]=='E' ||s[i]=='O' ||s[i]=='U' ||s[i]=='I' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
              ans.push_back(s[i]);
              s[i]='.';
          }
      }
      int j=0;
      sort(ans.begin(),ans.end());
      for(int i=0;i<s.size();i++){
          if(s[i]=='.'){
              s[i]=ans[j];
              j++;
          }
      }
      return s;  
    }
};
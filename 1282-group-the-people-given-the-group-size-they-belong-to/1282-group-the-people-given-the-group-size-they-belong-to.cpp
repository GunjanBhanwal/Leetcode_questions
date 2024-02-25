class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<int>v;
        vector<vector<int>>ans;
        for(auto i:groupSizes){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++){
           vector<int>temp;
           for(int j=0;j<groupSizes.size();j++){
               if(groupSizes[j]==v[i] ){
                   temp.push_back(j);
                   groupSizes[j]=0;
               }
               if(temp.size()==v[i]){
                   ans.push_back(temp);
                   i=i+v[i]-1;
                   break;
               }
           }
       }
        return ans;
       
    }
};
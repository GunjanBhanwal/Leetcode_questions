class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> ans;
        int value;
        sort(nums.begin(),nums.end());
        for(int i :nums){
            ans[i]++;
        }
        for(auto i:ans){
            if(i.second==1){
                value=i.first;
            }
        }
        
     return value;

    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int i;
        int pos=1;
        int pos2=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]<0){
              ans[pos]=nums[i];
              pos+=2;
          }
          else{
              ans[pos2]=nums[i];
              pos2+=2;

          }
        
        }
        return ans;
    }
};
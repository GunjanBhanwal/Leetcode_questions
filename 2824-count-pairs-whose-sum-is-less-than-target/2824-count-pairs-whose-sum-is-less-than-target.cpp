class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size()-1;
        int count=0;
        sort(nums.begin(),nums.end());
        while(s<n){
            if(nums[s]+nums[n]<target){
                count+=n-s;
                s++;
            }
            else{
           n--;}
        }
        return count;
    }
};
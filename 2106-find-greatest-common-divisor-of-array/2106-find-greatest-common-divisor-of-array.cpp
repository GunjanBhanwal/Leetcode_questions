class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a,b,ans;
        a=nums[0];
        b=nums[nums.size()-1];
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                ans=i;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a,b,ans;
        a=nums[0];
        b=nums[nums.size()-1];
        int c;
        return gcd(a,b);
    }
};
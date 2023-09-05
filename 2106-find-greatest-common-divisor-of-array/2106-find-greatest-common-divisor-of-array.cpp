class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a,b,ans=0;
        a=*min_element(nums.begin(),nums.end());
        b=*max_element(nums.begin(),nums.end());
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0 && ans<i){
                ans=i;
            }
        }
        return ans;
    }
};
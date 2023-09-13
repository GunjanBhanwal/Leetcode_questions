class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int maxa=0;
        while(s<e){
            int ans=(nums[s]-1) * (nums[e]-1);
            maxa=max(ans,maxa);
            if(nums[s]<nums[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return maxa;
    }
};
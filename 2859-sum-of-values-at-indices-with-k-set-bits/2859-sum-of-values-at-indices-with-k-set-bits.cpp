class Solution {
public:
    int check(int i,int k){
        int a=0;
        while(i!=0){
            int rem=i%2;
            if(rem==1){
                a++;
            }
            i=i/2;
        }
        if(a==k){
            return 1;
        }
        return 0;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int a=check(i,k);
            if(a==1){
                ans+=nums[i];
            }
        }
        return ans;
    }
};
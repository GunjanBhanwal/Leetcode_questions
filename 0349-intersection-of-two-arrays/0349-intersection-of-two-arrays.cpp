class Solution {
    int check(int a,vector<int>& nums1){
    for(int i=0;i<nums1.size();i++){
        if(a==nums1[i]){
            return 1;
        }
    }
    return 0;}
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<n;i++){
            int p=check(nums2[i],nums1);
            if(ans.size()==0 && p==1){
                ans.push_back(nums2[i]);
            }
            
            else if(ans.size()!=0 && p==1){
                int q=check(nums2[i],ans);
                if(q==0){
                    ans.push_back(nums2[i]);
                }
            }
            
            

        }
        return ans;
    }
};
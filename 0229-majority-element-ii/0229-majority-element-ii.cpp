class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int len=nums.size();
        map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second>len/3)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
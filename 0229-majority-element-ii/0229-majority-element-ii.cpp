class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int len=nums.size();
        map<int,int> a;
        for(int i:nums)
        {
            a[i]++;
        }
        for(auto i:a)
        {
            if(i.second>len/3)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
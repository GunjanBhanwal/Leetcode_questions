class Solution {
public:
    int maxArea(vector<int>& nums) {
       int n=nums.size();
       int max1=0;
       int min1;
       int area;
       int first=0;
       int last=n-1;
       while(first<last){
           min1=min(nums[first],nums[last]);
           area=min1*(last-first);
           max1=max(max1,area);
           if(nums[first]>nums[last]){
               last--;
           }
           else{
               first++;
           }

       }
       return max1;
       
    }
};
class Solution {
    
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    ans.push_back(arr1[j]);
                }
            }
        }
        int k=ans.size();
        int count=0;
        for(int i=0;i<arr1.size();i++){
            for(int j= 0;j<k;j++){
                if(arr1[i]==ans[j]){
                    count=1;
                }

            }
            if(count==0){
                ans.push_back(arr1[i]);
            }
            count=0;

        }
        return ans;
    }
};
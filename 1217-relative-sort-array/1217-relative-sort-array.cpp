class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int index=0;
        vector<int> arr;
        int m=arr1.size();
        int n=arr2.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr2[i]==arr1[j])
                {
                arr.push_back(arr1[j]);
                arr1[j]=-1;
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<m;i++)
        {
            if(arr1[i]!=-1)
            {
                arr.push_back(arr1[i]);
            }
        }
        return arr;
    }
};
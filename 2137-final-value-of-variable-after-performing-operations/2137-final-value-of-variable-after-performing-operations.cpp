class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int a=0;
        for(auto w:operations){
            if(w[0]=='-' || w[1]=='-'){
                a--;

            }
            else{
                a++;
            }
        }
        return a;
    }
};
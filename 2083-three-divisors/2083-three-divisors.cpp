class Solution {
public:
    bool isThree(int n) {
        int count=0;
        for(int i=1;i<n+1;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==3){
            return 1;
        }
        return 0;
    }
};
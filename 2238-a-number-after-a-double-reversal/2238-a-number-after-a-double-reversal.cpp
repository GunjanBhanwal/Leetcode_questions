class Solution {
public:
int reverse(int num){
    int ans=0;
    while(num!=0){
        int rem=num%10;
        ans=(ans*10)+rem;
        num=num/10;
    }
    return ans;
}
    bool isSameAfterReversals(int num) {
       int ans=reverse(num);
       ans=reverse(ans);
       return (num==ans); 
    }
};
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int final;
        final=arrivalTime+delayedTime;
        if(final==24){
            return 0;
        }
        if(final>24){
            return final%24;
        }
        return final;
    }
};
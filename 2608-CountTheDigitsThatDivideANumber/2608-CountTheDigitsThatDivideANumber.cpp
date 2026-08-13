// Last updated: 8/13/2026, 10:39:04 AM
class Solution {
public:
    int countDigits(int num) {
        int i = num;
        int count = 0;

        while(i>0){
            int digit = i%10;
            if(num % digit == 0){
                count ++;
            }
            i = i/10;
        }
        return count;
    }
};
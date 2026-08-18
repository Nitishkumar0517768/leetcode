// Last updated: 8/18/2026, 11:53:32 AM
class Solution {
public:
    int addDigits(int num) {

        if(num < 10){
            return num;
        }

        int nums = num;

        while(true){
            int sum = 0;
            while(nums > 0){
                sum += nums%10;
                nums /= 10;
            }
            if(sum < 10){
                return sum;
            }
            nums = sum;
        }
        return -1;
    }
};
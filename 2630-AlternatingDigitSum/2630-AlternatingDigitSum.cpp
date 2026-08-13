// Last updated: 8/13/2026, 10:39:02 AM
class Solution {
public:
    int alternateDigitSum(int n) {
        int count = 0;
        int sum = 0;

        for(int i=n; i>0; i=i/10){
            if(count%2 == 0){
                sum += i%10;
            }
            else{
                sum -= i%10;
            }
            count++;
        }
        if(count%2 == 0){
            sum = sum * (-1);
        }
        return sum;
    }
};
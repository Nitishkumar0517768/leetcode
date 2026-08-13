// Last updated: 8/13/2026, 10:37:48 AM
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = 0;

        int i=x; 
        while(i>0){
            n = n + i%10;
            i /= 10;
        }

        if(x%n == 0) return n;

        return -1;
    }
};
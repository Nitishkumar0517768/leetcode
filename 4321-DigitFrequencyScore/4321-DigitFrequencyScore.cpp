// Last updated: 8/13/2026, 10:35:54 AM
class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        while(n>0){
            sum = sum + n%10;
            n = n/10;
        }
        return sum;
    }
};
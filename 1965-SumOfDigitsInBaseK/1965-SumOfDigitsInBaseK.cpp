// Last updated: 8/18/2026, 11:49:00 AM
class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;

        while(n > 0){
            sum += n % k;
            n /= k;
        }

        return sum;
    }
};
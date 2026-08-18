// Last updated: 8/18/2026, 11:47:22 AM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i;
        for (i = 1; i <= 2 * n; i++) {
            if (i % 2 == 0 && i % n == 0) {
                break;
            }
        }
        return i;
    }
};
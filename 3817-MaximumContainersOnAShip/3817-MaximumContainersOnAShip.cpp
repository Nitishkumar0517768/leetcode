// Last updated: 8/13/2026, 10:36:53 AM
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int ans = maxWeight/w;

        return min(ans, n*n);
    }
};
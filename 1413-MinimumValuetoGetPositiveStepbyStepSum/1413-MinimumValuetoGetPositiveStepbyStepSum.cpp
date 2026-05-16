// Last updated: 5/16/2026, 9:30:51 PM
class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - low / 2;
    }
};
// Last updated: 8/18/2026, 11:49:38 AM
class Solution {
public:
    int countVowelStrings(int n) {
        return (n+1) * (n+2) * (n+3) * (n+4)/24;
    }
};
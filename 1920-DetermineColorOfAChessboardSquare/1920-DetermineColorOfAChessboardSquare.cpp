// Last updated: 8/18/2026, 11:49:18 AM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int n = coordinates[0] - '0';
        int m = coordinates[1] - '0';
        if((m+n)%2 == 0){
            return false;
        }
        return true;
    }
};
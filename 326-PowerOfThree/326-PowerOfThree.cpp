// Last updated: 8/18/2026, 11:53:14 AM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;

        while(n != 1){
            if(n%3 != 0) return false;
            n=n/3;
        }
        return true;
    }
};
// Last updated: 8/13/2026, 10:36:09 AM
class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int i = n;
        while(i>0){
            rev = rev * 10 + i%10;
            i=i/10;
        }

        return abs(n - rev);
    }
};
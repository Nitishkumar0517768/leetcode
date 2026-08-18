// Last updated: 8/18/2026, 11:48:16 AM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num < 10) return true;

        int count = 0;

        for(int i=num; i>0; i/=10){
            int rev = i%10;
            if(rev != 0) count++;

            if(rev == 0 && count == 0) return false;
        }
        return true;
    }
};
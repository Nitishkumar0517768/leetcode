// Last updated: 8/18/2026, 11:53:12 AM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <=0 ) return false;

        int i=n;
        
        while(i != 1){
            if(i%4 != 0) return false;
            i = i/4;
        }
        return true;
    }
};
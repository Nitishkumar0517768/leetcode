// Last updated: 8/18/2026, 11:53:42 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n <= 0) return false;

       int i = n;

       while(i!=1){
            if(i%2 == 1){
                return false;
            }
            i = i/2;
       }
       return true;
    }
};
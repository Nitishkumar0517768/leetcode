// Last updated: 8/25/2026, 11:41:14 AM
class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0;
        int pro = 1;

        while(m>0){
            sum = sum + m%10;
            pro = pro *  (m%10);
            m = m/10;
        }

        if(n % (sum + pro) == 0){
            return true;
        }
        return false;
    }
};
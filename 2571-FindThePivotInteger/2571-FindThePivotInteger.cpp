// Last updated: 8/18/2026, 11:46:50 AM
class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n+1) / 2;
        int sum1 = 0;

        for(int i=1; i<=n; i++){
            sum1 += i;

            if(sum1 == total-sum1+i){
                return i;
            }
        }
        return -1;
    }
};
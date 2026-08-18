// Last updated: 8/18/2026, 11:50:52 AM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1;
        int sum = 0;

        int i=n; 
        while(i>0){
            pro *= i%10;
            sum += i%10;
            i/=10;
        }
        return pro-sum;
    }
};
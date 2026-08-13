// Last updated: 8/13/2026, 10:36:10 AM
class Solution {
public:
    long long sumAndMultiply(int n) {
        int a = 0;
        long long b = 0;
        int i = 1;
        long long sum = 0;

        while(n > 0){
            if(n%10==0){
                n = n/10;
                continue;
            }

            a = n%10;
            sum = sum + a;
            b = a*i + b;
            i = i*10;
            n = n/10;
        }

        return b*sum;
    }
};
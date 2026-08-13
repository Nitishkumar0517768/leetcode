// Last updated: 8/13/2026, 10:36:29 AM
class Solution {
public:
    long long removeZeros(long long n) {
        long long rev = 0;

        while(n >0){
            if(n%10 !=0){
                rev = rev*10 + n%10;
            }
                n /= 10;
        }
        
        string straight = to_string(rev);
        reverse(straight.begin(), straight.end());


        return stoll(straight);
    }
};
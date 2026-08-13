// Last updated: 8/13/2026, 10:35:53 AM
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        long long ans = 0 ;

        for(int x = max(1, n-k); x <= n+k; x++){
    if((n & x) == 0){
        ans += x;
    }
}

return ans;
    }
};
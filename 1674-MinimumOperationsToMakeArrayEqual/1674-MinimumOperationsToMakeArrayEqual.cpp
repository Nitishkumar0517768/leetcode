// Last updated: 8/18/2026, 11:49:51 AM
class Solution {
public:
    int minOperations(int n) {
        int i;
        int ans = 0;
        if(n%2 == 0){
            i = 1;
        }
        else{
            i = 2;
        }

        while(i<n){
            ans += i;
            i += 2;
        }
        return ans;
    }
};
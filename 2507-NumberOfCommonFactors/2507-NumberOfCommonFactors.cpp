// Last updated: 8/18/2026, 11:47:15 AM
class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        int n = min(a,b);

        for(int i=1; i<=n; i++){
            if(a%i == 0 && b%i == 0){
                count++;
            }
        }
        return count;
    }
};
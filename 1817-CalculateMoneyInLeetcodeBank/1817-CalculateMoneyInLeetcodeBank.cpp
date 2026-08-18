// Last updated: 8/18/2026, 11:49:31 AM
class Solution {
public:
    int totalMoney(int n) {
        int m = n/7 + 1;
        int count = 0;
        int sum = 0;
        int k = 0;

        for(int i=0; i<m; i++){
            for(int j=1+k; j<=7+k; j++){
                sum += j;
                count++;
                if(count == n){
                    return sum;
                }
            }
            k++;
        }
        return sum;
    }
};
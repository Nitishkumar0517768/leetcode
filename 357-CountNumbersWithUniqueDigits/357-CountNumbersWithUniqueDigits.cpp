// Last updated: 8/25/2026, 11:45:56 AM
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int m = pow(10, n);
        int count = 1;

        for(int i=1; i<m; i++){
            bool arr[10] = {false};
            int check = 0;
            int k = i;

            while(k>0){
                int digit = k%10;
                if(arr[digit]){
                    check = 1;
                    break;
                }
                else{
                    arr[digit] = true;
                }
                k = k/10;
            }
            if(check == 0){
                count++;
            }
        }
        return count;
    }
};
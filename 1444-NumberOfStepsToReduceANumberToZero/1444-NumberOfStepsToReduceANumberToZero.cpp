// Last updated: 8/18/2026, 11:50:44 AM
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        int n = num;

        for(int i=0; i<n; i++){
            if(num % 2 == 0){
                num = num/2;
                count++;
            }
            if(num % 2 == 1){
                num = num - 1;
                count++;
            }
            if(num == 0){
                break;
            }
        }
        return count;
    }
};
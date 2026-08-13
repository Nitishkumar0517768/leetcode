// Last updated: 8/13/2026, 10:37:05 AM
class Solution {
public:
    bool isBalanced(string num) {
        int sum1 = 0;
        int sum2 = 0;

        for(int i=0; i<num.size(); i++){
            if(i%2 == 0){
                sum1 = sum1 + (num[i] - '0');
            }
            else{
                sum2 = sum2 + (num[i] - '0');
            }
        }

        return sum1 == sum2;
    }
};
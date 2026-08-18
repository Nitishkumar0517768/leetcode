// Last updated: 8/18/2026, 11:47:54 AM
class Solution {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
        
        while(num1!=0 && num2!=0){
            if(num1 < num2){
                num2 = num2 - num1;
            }
            else{
                num1 = num1 - num2;
            }
            count++;
        }
        return count;
    }
};
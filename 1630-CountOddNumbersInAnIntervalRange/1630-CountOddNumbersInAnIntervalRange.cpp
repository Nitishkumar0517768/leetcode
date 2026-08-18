// Last updated: 8/18/2026, 11:49:58 AM
class Solution {
public:
    int countOdds(int low, int high) {
        // int count = 0;

        // for(int i=low; i<=high; i++){
        //     if(i%2 == 1){
        //         count++;
        //     }
        // }
        // return count;


        return (high + 1) / 2 - low / 2;
    }
};
// Last updated: 8/13/2026, 10:38:00 AM
class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();

        if(n<=8){
            return n;
        }
        else if(n<=16){
            int m = n-8;
            return 2*m + 8;
        }
        else if(n<=24){
            int m = n-16;
            return 3*m + 16 +8;
        }
        else{
            int m = n-24;
            return 4*m + 24 + 16 + 8;
        }
        return 1;
    }
};
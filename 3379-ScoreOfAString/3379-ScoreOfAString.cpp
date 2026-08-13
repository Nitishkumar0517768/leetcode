// Last updated: 8/13/2026, 10:37:49 AM
class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;

        for(int i=0; i<s.size()-1; i++){
            int diff = abs(s[i]-s[i+1]);
            sum = sum  + diff;
        }
        return sum;
    }
};
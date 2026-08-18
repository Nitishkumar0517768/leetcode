// Last updated: 8/18/2026, 11:54:58 AM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        for(int i=s.size()-1; i>=0; i--){
            if(s[i] != ' '){
                count++;
            }
            if(s[i] == ' ' && count > 0){
                break;
            }
        }
        return count;
    }
};
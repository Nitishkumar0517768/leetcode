// Last updated: 8/18/2026, 11:51:50 AM
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0; 
        int j=s.length() - 1;

        while(j > i){
            if(!isalpha(s[i])){
                i++;
            }
            else if(!isalpha(s[j])){
                j--;
            }
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
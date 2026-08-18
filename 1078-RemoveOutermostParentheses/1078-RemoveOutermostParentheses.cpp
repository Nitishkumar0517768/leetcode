// Last updated: 8/18/2026, 11:51:34 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                if(count > 0){
                    res += s[i];
                }
                count++;
            }
            if(s[i] == ')'){
                count--;
                if(count > 0){
                    res+= s[i];
                }
            }

        }
        return res;
    }
};
// Last updated: 8/13/2026, 10:36:39 AM
class Solution {
public:
    string processStr(string s) {
       string res = "";

       for(int i=0; i<s.size(); i++){

        if(isalpha(s[i])){
            res += s[i];
        }

        if(s[i] == '*' && !res.empty()){
            res.pop_back();
        }
        else if(s[i] == '#' && !res.empty()){
            res += res;
        }
        else if(s[i] == '%' && !res.empty()){
            reverse(res.begin(), res.end());
        }
       
       } 
       cout << res;
       return res;
    }
};
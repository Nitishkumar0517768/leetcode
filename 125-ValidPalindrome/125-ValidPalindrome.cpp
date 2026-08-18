// Last updated: 8/18/2026, 11:54:29 AM
class Solution {
public:
    bool isPalindrome(string s) {
       string res = "";

       for(int i=0; i<s.size(); i++){
        if((s[i] >='A' && s[i] <='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
            s[i] = tolower(s[i]);
            res.push_back(s[i]);
        }
       }

       int i=0;
       int j=res.size() -1;

       while(j>i){
        if(res[i] == res[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
       }
       return true;
    }
};
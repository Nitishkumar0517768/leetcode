// Last updated: 8/18/2026, 11:49:09 AM
class Solution {
public:
    string truncateSentence(string s, int k) {
        string res = "";
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == ' '){
                count++;
            }
            if(count == k) return res;

            res.push_back(s[i]);
        }
        return res;
    }
};
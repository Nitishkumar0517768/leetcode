// Last updated: 8/18/2026, 11:52:53 AM
class Solution {
public:
    int countSegments(string s) {
        vector<string> res;
        string temp = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            if(s[i] == ' ' || i == s.size()-1){
                if(temp != ""){
                    res.push_back(temp);
                    temp = "";
                }
            }
        }class Solution {
public:
    int countSegments(string s) {
        vector<string> res;
        string temp = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            if(s[i] == ' ' || i == s.size()-1){
                if(temp != ""){
                    res.push_back(temp);
                    temp = "";
                }
            }
        }
        return res.size();
    }
};
        return res.size();
    }
};
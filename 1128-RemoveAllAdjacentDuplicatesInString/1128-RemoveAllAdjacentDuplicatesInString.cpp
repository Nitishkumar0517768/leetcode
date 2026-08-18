// Last updated: 8/18/2026, 11:51:21 AM
class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";

        for(char ch : s){
            if(!res.empty() && res.back()==ch){
                res.pop_back();
            }
            else{
                res.push_back(ch);
            }
        }
        return res;
    }
};